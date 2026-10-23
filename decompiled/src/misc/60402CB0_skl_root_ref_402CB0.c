/* skl_root_ref_402CB0
 * address: 0x60402CB0   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall skl_root_ref_402CB0(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r0
  int v7; // r2
  char *v8; // r1
  float *v9; // r1
  float v10; // s2
  EffectData *v11; // r1
  signed int result; // r0
  EffectData *v13; // r0
  Vec3 *v14; // r3
  _DWORD v15[2]; // [sp+8h] [bp-30h] BYREF
  Vec3 v16; // [sp+10h] [bp-28h] BYREF
  Vec3 v17[2]; // [sp+1Ch] [bp-1Ch] BYREF

  v16.x = 1.0;
  v16.y = 1.0;
  v16.z = 1.0;
  v4 = FIELD_U32(a1, 16);
  v5 = FIELD_U32(a1, 504);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "skl_root";
  sub_60793F04(FIELD_U32(v4, 4), v17, v15);
  v6 = FIELD_U32(a1, 2544);
  v7 = 2;
  if ( !v5 )
    v7 = 1;
  if ( v5 == 3 )
    v7 = 0;
  if ( v6 - 2 > 3 )
    v8 = (char *)&unk_60B0202C;
  else
    v8 = (char *)*(&off_60BF9AA0 + v6 - 2);
  v9 = (float *)&v8[4 * v7];
  v10 = *v9;
  v16.x = *v9 * FIELD_F32(a1, 428);
  v16.y = v10 * FIELD_F32(a1, 432);
  v16.z = v10 * FIELD_F32(a1, 436);
  if ( a2 == 1 )
  {
    v11 = (EffectData *)(a1 + 2716);
    if ( FIELD_U32(a1, 508) )
      return sub_60236F74(v6, v11, dword_60B020D4[v7], v17, 0, 0);
    else
      return sub_60236F74(v6, v11, dword_60B020C8[v7], v17, 0, &v16);
  }
  else
  {
    result = sub_60235E50(a1 + 2716);
    if ( result == 1 )
    {
      if ( FIELD_U32(a1, 508) )
      {
        v13 = (EffectData *)(a1 + 2716);
        v14 = 0;
      }
      else
      {
        v14 = &v16;
        v13 = (EffectData *)(a1 + 2716);
      }
      return EffectData_update(v13, v17, 0, v14);
    }
  }
  return result;
}
