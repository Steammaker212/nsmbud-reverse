/* sub_603D2F40
 * address: 0x603D2F40   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D2F40(int a1)
{
  _DWORD *v2; // r7
  int i; // r9
  int v4; // r0
  int v5; // r2
  __int64 v6; // r0
  __int16 v7; // r1
  __int16 v8; // r0
  float v9; // r4
  float v10; // r5
  float v11; // s20
  float v12; // s22
  ActorBuildInfo buildInfo; // [sp+14h] [bp-74h] BYREF

  if ( !FIELD_U8(a1, 536) )
  {
    v2 = (_DWORD *)(a1 + 668);
    for ( i = 0; i < 4; ++i )
    {
      if ( *((_BYTE *)v2 - 2) )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = v4 - 33;
          HIDWORD(v6) = 1u >> (33 - v4);
          LODWORD(v6) = 1 << (v4 - 1);
          if ( v5 >= 0 )
          {
            HIDWORD(v6) = 1 << v5;
            LODWORD(v6) = 0;
          }
          if ( (*(_QWORD *)(EventMgr__instance + 16) & v6) == 0 )
          {
            *((_BYTE *)v2 - 2) = 0;
            return 1;
          }
        }
        v7 = FIELD_U16(PlayerMgr_instance, 66);
        if ( (v7 & 1) != 0
          && *(unsigned __int8 *)(FIELD_U32(PlayerMgr_instance, 32) + 532) == FIELD_U8(a1, 532)
          || (v7 & 2) != 0
          && *(unsigned __int8 *)(FIELD_U32(PlayerMgr_instance, 36) + 532) == FIELD_U8(a1, 532)
          || (v7 & 4) != 0
          && *(unsigned __int8 *)(FIELD_U32(PlayerMgr_instance, 40) + 532) == FIELD_U8(a1, 532)
          || (v7 & 8) != 0
          && *(unsigned __int8 *)(FIELD_U32(PlayerMgr_instance, 44) + 532) == FIELD_U8(a1, 532) )
        {
          if ( *((_WORD *)v2 - 2) )
          {
            v8 = *((_WORD *)v2 - 2) - 1;
            *((_WORD *)v2 - 2) = v8;
            if ( !v8 )
            {
              v9 = *((float *)v2 - 5);
              v10 = *((float *)v2 - 4);
              v11 = FIELD_F32(dword_60CC6484, 104);
              v12 = FIELD_F32(dword_60CC6484, 116);
              memset(&buildInfo.settings2, 0, 40);
              buildInfo.settings1 = *(v2 - 2);
              buildInfo.profile = Profile__get(*(v2 - 3));
              buildInfo.position.x = v12 + (float)((float)(v11 * 0.5) + 32.0);
              buildInfo.position.y = v9;
              buildInfo.position.z = v10;
              buildInfo.field_20 = FIELD_U8(a1, 86);
              if ( Actor__getProfileId((Actor *)a1) == 664 )
                buildInfo.eventId1 = *v2;
              ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
              *((_BYTE *)v2 - 2) = 0;
            }
          }
        }
      }
      v2 += 7;
    }
  }
  return 1;
}
