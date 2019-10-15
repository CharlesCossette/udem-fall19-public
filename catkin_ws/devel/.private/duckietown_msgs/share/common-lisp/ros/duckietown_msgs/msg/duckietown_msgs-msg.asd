
(cl:in-package :asdf)

(defsystem "duckietown_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "AntiInstagramHealth" :depends-on ("_package_AntiInstagramHealth"))
    (:file "_package_AntiInstagramHealth" :depends-on ("_package"))
    (:file "AntiInstagramTransform" :depends-on ("_package_AntiInstagramTransform"))
    (:file "_package_AntiInstagramTransform" :depends-on ("_package"))
    (:file "AntiInstagramTransform_CB" :depends-on ("_package_AntiInstagramTransform_CB"))
    (:file "_package_AntiInstagramTransform_CB" :depends-on ("_package"))
    (:file "AprilTagDetection" :depends-on ("_package_AprilTagDetection"))
    (:file "_package_AprilTagDetection" :depends-on ("_package"))
    (:file "AprilTagDetectionArray" :depends-on ("_package_AprilTagDetectionArray"))
    (:file "_package_AprilTagDetectionArray" :depends-on ("_package"))
    (:file "AprilTagExtended" :depends-on ("_package_AprilTagExtended"))
    (:file "_package_AprilTagExtended" :depends-on ("_package"))
    (:file "AprilTagsWithInfos" :depends-on ("_package_AprilTagsWithInfos"))
    (:file "_package_AprilTagsWithInfos" :depends-on ("_package"))
    (:file "BoolStamped" :depends-on ("_package_BoolStamped"))
    (:file "_package_BoolStamped" :depends-on ("_package"))
    (:file "CarControl" :depends-on ("_package_CarControl"))
    (:file "_package_CarControl" :depends-on ("_package"))
    (:file "CoordinationClearance" :depends-on ("_package_CoordinationClearance"))
    (:file "_package_CoordinationClearance" :depends-on ("_package"))
    (:file "CoordinationSignal" :depends-on ("_package_CoordinationSignal"))
    (:file "_package_CoordinationSignal" :depends-on ("_package"))
    (:file "DuckieSensor" :depends-on ("_package_DuckieSensor"))
    (:file "_package_DuckieSensor" :depends-on ("_package"))
    (:file "DuckiebotLED" :depends-on ("_package_DuckiebotLED"))
    (:file "_package_DuckiebotLED" :depends-on ("_package"))
    (:file "FSMState" :depends-on ("_package_FSMState"))
    (:file "_package_FSMState" :depends-on ("_package"))
    (:file "IntersectionPose" :depends-on ("_package_IntersectionPose"))
    (:file "_package_IntersectionPose" :depends-on ("_package"))
    (:file "IntersectionPoseImg" :depends-on ("_package_IntersectionPoseImg"))
    (:file "_package_IntersectionPoseImg" :depends-on ("_package"))
    (:file "IntersectionPoseImgDebug" :depends-on ("_package_IntersectionPoseImgDebug"))
    (:file "_package_IntersectionPoseImgDebug" :depends-on ("_package"))
    (:file "KinematicsParameters" :depends-on ("_package_KinematicsParameters"))
    (:file "_package_KinematicsParameters" :depends-on ("_package"))
    (:file "KinematicsWeights" :depends-on ("_package_KinematicsWeights"))
    (:file "_package_KinematicsWeights" :depends-on ("_package"))
    (:file "LEDDetection" :depends-on ("_package_LEDDetection"))
    (:file "_package_LEDDetection" :depends-on ("_package"))
    (:file "LEDDetectionArray" :depends-on ("_package_LEDDetectionArray"))
    (:file "_package_LEDDetectionArray" :depends-on ("_package"))
    (:file "LEDDetectionDebugInfo" :depends-on ("_package_LEDDetectionDebugInfo"))
    (:file "_package_LEDDetectionDebugInfo" :depends-on ("_package"))
    (:file "LEDInterpreter" :depends-on ("_package_LEDInterpreter"))
    (:file "_package_LEDInterpreter" :depends-on ("_package"))
    (:file "LEDPattern" :depends-on ("_package_LEDPattern"))
    (:file "_package_LEDPattern" :depends-on ("_package"))
    (:file "LanePose" :depends-on ("_package_LanePose"))
    (:file "_package_LanePose" :depends-on ("_package"))
    (:file "LightSensor" :depends-on ("_package_LightSensor"))
    (:file "_package_LightSensor" :depends-on ("_package"))
    (:file "MaintenanceState" :depends-on ("_package_MaintenanceState"))
    (:file "_package_MaintenanceState" :depends-on ("_package"))
    (:file "ObstacleImageDetection" :depends-on ("_package_ObstacleImageDetection"))
    (:file "_package_ObstacleImageDetection" :depends-on ("_package"))
    (:file "ObstacleImageDetectionList" :depends-on ("_package_ObstacleImageDetectionList"))
    (:file "_package_ObstacleImageDetectionList" :depends-on ("_package"))
    (:file "ObstacleProjectedDetection" :depends-on ("_package_ObstacleProjectedDetection"))
    (:file "_package_ObstacleProjectedDetection" :depends-on ("_package"))
    (:file "ObstacleProjectedDetectionList" :depends-on ("_package_ObstacleProjectedDetectionList"))
    (:file "_package_ObstacleProjectedDetectionList" :depends-on ("_package"))
    (:file "ObstacleType" :depends-on ("_package_ObstacleType"))
    (:file "_package_ObstacleType" :depends-on ("_package"))
    (:file "Pixel" :depends-on ("_package_Pixel"))
    (:file "_package_Pixel" :depends-on ("_package"))
    (:file "Pose2DStamped" :depends-on ("_package_Pose2DStamped"))
    (:file "_package_Pose2DStamped" :depends-on ("_package"))
    (:file "Rect" :depends-on ("_package_Rect"))
    (:file "_package_Rect" :depends-on ("_package"))
    (:file "Rects" :depends-on ("_package_Rects"))
    (:file "_package_Rects" :depends-on ("_package"))
    (:file "SceneSegments" :depends-on ("_package_SceneSegments"))
    (:file "_package_SceneSegments" :depends-on ("_package"))
    (:file "Segment" :depends-on ("_package_Segment"))
    (:file "_package_Segment" :depends-on ("_package"))
    (:file "SegmentList" :depends-on ("_package_SegmentList"))
    (:file "_package_SegmentList" :depends-on ("_package"))
    (:file "SignalsDetection" :depends-on ("_package_SignalsDetection"))
    (:file "_package_SignalsDetection" :depends-on ("_package"))
    (:file "SignalsDetectionETHZ17" :depends-on ("_package_SignalsDetectionETHZ17"))
    (:file "_package_SignalsDetectionETHZ17" :depends-on ("_package"))
    (:file "SourceTargetNodes" :depends-on ("_package_SourceTargetNodes"))
    (:file "_package_SourceTargetNodes" :depends-on ("_package"))
    (:file "StopLineReading" :depends-on ("_package_StopLineReading"))
    (:file "_package_StopLineReading" :depends-on ("_package"))
    (:file "StreetNameDetection" :depends-on ("_package_StreetNameDetection"))
    (:file "_package_StreetNameDetection" :depends-on ("_package"))
    (:file "StreetNames" :depends-on ("_package_StreetNames"))
    (:file "_package_StreetNames" :depends-on ("_package"))
    (:file "TagInfo" :depends-on ("_package_TagInfo"))
    (:file "_package_TagInfo" :depends-on ("_package"))
    (:file "ThetaDotSample" :depends-on ("_package_ThetaDotSample"))
    (:file "_package_ThetaDotSample" :depends-on ("_package"))
    (:file "Trajectory" :depends-on ("_package_Trajectory"))
    (:file "_package_Trajectory" :depends-on ("_package"))
    (:file "TurnIDandType" :depends-on ("_package_TurnIDandType"))
    (:file "_package_TurnIDandType" :depends-on ("_package"))
    (:file "Twist2DStamped" :depends-on ("_package_Twist2DStamped"))
    (:file "_package_Twist2DStamped" :depends-on ("_package"))
    (:file "Vector2D" :depends-on ("_package_Vector2D"))
    (:file "_package_Vector2D" :depends-on ("_package"))
    (:file "VehicleCorners" :depends-on ("_package_VehicleCorners"))
    (:file "_package_VehicleCorners" :depends-on ("_package"))
    (:file "VehiclePose" :depends-on ("_package_VehiclePose"))
    (:file "_package_VehiclePose" :depends-on ("_package"))
    (:file "Vsample" :depends-on ("_package_Vsample"))
    (:file "_package_Vsample" :depends-on ("_package"))
    (:file "WheelsCmd" :depends-on ("_package_WheelsCmd"))
    (:file "_package_WheelsCmd" :depends-on ("_package"))
    (:file "WheelsCmdStamped" :depends-on ("_package_WheelsCmdStamped"))
    (:file "_package_WheelsCmdStamped" :depends-on ("_package"))
  ))