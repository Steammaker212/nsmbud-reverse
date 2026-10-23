/* sub_606EE960
 * address: 0x606EE960   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EE960(int a1)
{
  int v2; // r0
  int *v3; // r5
  int result; // r0
  float v5; // s0
  float v6; // r7
  float v7; // s16
  int v8; // r2
  ActorBuildInfo v9; // [sp+0h] [bp-50h] BYREF

  v3 = (int *)(a1 + 6108);
  v2 = FIELD_U32(a1, 6108);
  if ( v2 < 1 )
  {
    v5 = sub_606EEEC4(a1);
    v6 = FIELD_F32(a1, 112);
    v7 = v5;
    memset(&v9.field_20, 0, 12);
    memset(&v9.position.y, 0, 12);
    v9.position.x = 0.0;
    v9.profile = 0;
    v9.parentId = 0;
    v9.settings1 = 0x10000000;
    v9.settings2 = FIELD_U32(a1, 24);
    v9.profile = Profile__get(0x32u);
    v9.position.x = v7;
    v9.position.y = v6;
    *(_WORD *)&v9.field_20 = FIELD_U8(a1, 86);
    v9.linkId = FIELD_U8(a1, 29);
    result = (int)ActorMgr__create((void *)ActorMgr__instance, &v9, 0);
    if ( result )
    {
      result = a1 + 6104;
      v8 = FIELD_U32(a1, 6104);
      if ( (unsigned int)(8 - v8) <= 7 )
      {
        *(_DWORD *)result = v8 - 1;
        if ( v8 < 2 )
        {
          if ( (FIELD_U8(a1, 24) & 1) != 0 )
          {
            *v3 = *(_DWORD *)((char *)&unk_60AF2B14 + ((FIELD_U32(a1, 20) >> 2) & 0xC));
            *(_DWORD *)result = 8;
            FIELD_U32(a1, 6116) = -1082130432;
            FIELD_U32(a1, 6120) = -1082130432;
            FIELD_U32(a1, 6124) = -1082130432;
            FIELD_U32(a1, 6128) = -1082130432;
            FIELD_U32(a1, 6132) = -1082130432;
            FIELD_U32(a1, 6136) = -1082130432;
            FIELD_U32(a1, 6140) = -1082130432;
            FIELD_U32(a1, 6144) = -1082130432;
            return 6144;
          }
          else
          {
            return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBC17C);
          }
        }
        else
        {
          *v3 = *(_DWORD *)((char *)&unk_60AF2B14 + ((FIELD_U32(a1, 20) >> 2) & 0xC));
          result = a1 + 4 * (8 - v8) + 6116;
          *(float *)result = v7;
        }
      }
    }
  }
  else
  {
    result = v2 - 1;
    *v3 = result;
  }
  return result;
}
