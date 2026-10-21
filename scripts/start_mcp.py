import importlib.util
import sys

PLUGIN = r"C:\Users\Saif Khan\AppData\Roaming\Hex-Rays\IDA Pro\plugins\mcp-plugin.py"

spec = importlib.util.spec_from_file_location("mcp_plugin_auto", PLUGIN)
mod = importlib.util.module_from_spec(spec)
sys.modules["mcp_plugin_auto"] = mod
spec.loader.exec_module(mod)

instance = mod.PLUGIN_ENTRY()
instance.run(0)
print("[MCP] autostart script issued Server.start()")
