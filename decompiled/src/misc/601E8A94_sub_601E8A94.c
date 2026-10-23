/* sub_601E8A94
 * address: 0x601E8A94   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E8A94(int a1, int a2)
{
  char v3; // r0
  _BYTE *v4; // r0
  int v5; // r0
  int v6; // r5
  char v7; // r12
  int v8; // r7
  int v9; // r6
  ActorBuildInfo v11; // [sp+8h] [bp-A8h] BYREF
  _DWORD v12[30]; // [sp+38h] [bp-78h] BYREF

  v12[0] = 0;
  memset(&v12[2], 0, 72);
  sub_601905DC(v12);
  v12[0] = a2;
  v12[1] = sub_601916C8(dword_60C8996C, a2);
  if ( (unsigned int)(a2 - 29) >= 2 )
  {
    if ( a2 == 28 )
    {
      v5 = sub_601CF9C0(dword_60C8AEF0);
      memset(&v11, 255, 12);
      sub_6019EC34(&v11, (_DWORD *)(v5 + 1032));
      v6 = sub_601693A0(883);
      v8 = *(_DWORD *)(ActorMgr__instance + 27180);
      while ( 1 )
      {
        v9 = *(_DWORD *)v6;
        if ( ((unsigned int)&dword_60C88AA0 & ~(1612614692 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
        {
          dword_60C88A9C = (int)&off_60BD4BB0;
          _cxa_guard_release(&dword_60C88AA0);
        }
        if ( v9
          && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C88A9C) == 1
          && FIELD_U32(v9, 240) == v11.settings1
          && FIELD_U32(v9, 248) == v11.parentId )
        {
          break;
        }
        v6 = sub_601693C0(883, v6 + 4);
        if ( v6 == v8 )
          goto LABEL_17;
      }
      v12[4] = *(_DWORD *)(*(_DWORD *)v6 + 8);
LABEL_17:
      if ( !FIELD_U8(dword_60C8B144, 65) )
        v12[5] = *(_DWORD *)(*(_DWORD *)sub_601693A0(901) + 8);
    }
  }
  else
  {
    if ( FIELD_U8(dword_60C8B144, 65) )
    {
      memset(&v11, 0, sizeof(v11));
      v3 = 1;
      if ( a2 == 30 )
        v3 = 2;
      v11.linkId = v3;
      v11.eventId2 = 0;
      v11.eventId1 = 0;
      v11.field_20 = 0;
      v11.movementId = 0;
      memset(&v11.position, 0, sizeof(v11.position));
      v11.profile = Profile__get(0x388u);
      v4 = ActorMgr__create((void *)ActorMgr__instance, &v11, 0);
      goto LABEL_6;
    }
    v4 = *(_BYTE **)sub_601693A0(901);
    if ( !v4 || v4[272] )
LABEL_6:
      v12[4] = *((_DWORD *)v4 + 2);
  }
  return sub_60191160((_DWORD *)dword_60C8996C, v12);
}
