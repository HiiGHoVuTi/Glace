
while getopts s:o: flag
do
    case "${flag}" in
        s) source=${OPTARG};;
        o) output=${OPTARG};;
    esac
done

python3 ./rust/gen.py $source $output
rustc $output