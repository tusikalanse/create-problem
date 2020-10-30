if [ ! $# -eq 1  ];then
  echo param error!
  echo please create only one file folder
  exit 1
fi

echo $1
mkdir $1
cp -r util/* $1/
