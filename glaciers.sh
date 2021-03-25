
while getopts s:o:c: flag
do
    case "${flag}" in
        s) source=${OPTARG};;
        o) output=${OPTARG};;
        c) compile=${OPTARG};;
    esac
done

python3 ./rust/gen.py $source $output
if [$? -eq 0] && [ $compile != "no" ]
then    
    rustc $output
fi