#!/usr/bin/env python3.10
from cxp_interface import CXPInterface
from test_camera_q21_a230 import TestCameraQ21A230

cxp = CXPInterface()
cxp.set("key", "value")

cam = TestCameraQ21A230(cxp=cxp)
print(cam.lut().lut_status())
