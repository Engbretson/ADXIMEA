rm *.adl
rm *.edl
rm *.inc
rm *.template

python makeAdl.py MQ022HG.xml MQ022HG
python makeEdl.py MQ022HG.xml MQ022HG
python makeMyDB.py MQ022HG.xml MQ022HG.template
python makeMine.py MQ022HG.xml MQ022HG MQ022HG 

cp  *.adl MQ022HG
cp  *.edl MQ022HG
cp  *.inc MQ022HG
cp  *.template MQ022HG


rm *.adl
rm *.edl
rm *.inc
rm *.template

python makeAdl.py MC023CG.xml MC023CG
python makeEdl.py MC023CG.xml MC023CG
python makeMyDB.py MC023CG.xml MC023CG.template
python makeMine.py MC023CG.xml MC023CG MC023CG 

cp  *.adl MC023CG
cp  *.edl MC023CG
cp  *.inc MC023CG
cp  *.template MC023CG

rm *.adl
rm *.edl
rm *.inc
rm *.template

