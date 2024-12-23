echo "Sleeping for 30s"
sleep 30
echo "Im AWAKE!!!!"
source /opt/ros/humble/setup.bash
sleep 2
python3 PRIM_Main_Jetson.py
pkill -f MS_startup.sh
