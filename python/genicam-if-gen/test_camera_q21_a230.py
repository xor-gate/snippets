from cxp_interface import CXPInterface
from test_camera import TestCamera

class LUT:
	def __init__(self, cxp: CXPInterface):
		self._cxp = cxp
	def rw_feature(self, value = None) -> any:
		featureName = "rw_feature"
		if value:
			self.cxp.set(featureName, value)
		else:
			return self.cxp.get(featureName, value)

	def ro_feature(self) -> any:
		return self.cxp.get("LUTRoFeature)

	# todo return enum class
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
		
