from cxp_interface import CXPInterface
from test_camera import TestCamera

class LUT:
	def __init__(self, cxp: CXPInterface):
		self.cxp = cxp
	def lut_status(self) -> str:
		return "LUTStatus"

class TestCameraQ21A230(TestCamera):
	def __init__(self, cxp: CXPInterface):
		self._cxp = cxp
		self._lut = LUT(cxp)
	def set_up(self):
		pass
	def tear_down(self):
		pass
	def lut(self) -> LUT:
		return self._lut
		
