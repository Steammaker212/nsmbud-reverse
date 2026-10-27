// Written by scripts/sdk/make_mod_project.py; see modbase/models.h.
#pragma once
#define MODBASE_CUSTOM_MODELS 1
#define MODBASE_SPRITE_TABLE_SIZE 743

// Where every log line goes: ModBase::log / logRaw, codedx's LOG() / socket_log,
// the archive guard (modbase/log.h).
//   1  the TCP log server (code/debug/socket_log.cpp: socket_log_host / _port)
//   0  svcOutputDebugString (svc 0x27): the Ryujinx log, or the debug channel on
//      hardware. The socket is then never opened, so boot does not wait on it.
#define MODBASE_NETWORK_LOG 0
