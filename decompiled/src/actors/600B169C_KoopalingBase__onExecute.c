/* KoopalingBase__onExecute
 * address: 0x600B169C   size: 416   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by:
//   - 0x6009C4A4 : Iggy
int __fastcall KoopalingBase__onExecute(int a1)
{
  int v2; // r0
  int v3; // s2
  int v4; // s2
  _BYTE v6[12]; // [sp+0h] [bp-48h] BYREF
  int v7; // [sp+Ch] [bp-3Ch]
  int v8; // [sp+1Ch] [bp-2Ch]

  StateMgr__execute((StateMgr *)(a1 + 6084));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1024))(a1);
  if ( !FIELD_U8(a1, 6220) )
  {
    v2 = FIELD_U32(a1, 7176);
    if ( (v2 & 1) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
      FIELD_F64(a1, 7140) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1152))(a1);
      FIELD_U32(a1, 7148) = v3;
      FIELD_F64(a1, 7156) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1168))(a1);
      FIELD_U32(a1, 7164) = v4;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1172))(a1);
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 7096) + 108))(
        **(_DWORD **)(a1 + 7096),
        FIELD_U32(a1, 7768),
        v6);
      FIELD_U32(a1, 7776) = v7;
      FIELD_U32(a1, 7780) = v8;
      FIELD_U32(a1, 7784) = 1166843904;
      v2 = FIELD_U32(a1, 7176);
    }
    if ( (v2 & 2) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1048))(a1);
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 7096) + 108))(
        **(_DWORD **)(a1 + 7096),
        FIELD_U32(a1, 7772),
        v6);
      FIELD_U32(a1, 7788) = v7;
      FIELD_U32(a1, 7792) = v8;
      FIELD_U32(a1, 7796) = 1166843904;
    }
  }
  return 1;
}
