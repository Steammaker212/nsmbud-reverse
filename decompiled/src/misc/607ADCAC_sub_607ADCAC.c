/* sub_607ADCAC
 * address: 0x607ADCAC   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607ADCAC(int a1)
{
  int v2; // r0
  _DWORD *v3; // r7
  int *v4; // r6
  int v5; // r1
  int v6; // r0
  int v7; // r2
  int *v8; // r5
  signed int result; // r0
  int v10; // r6
  int v11; // r1
  _DWORD *v12; // r5
  int v13; // r4
  unsigned int v14; // r1
  bool v15; // zf
  int v16; // r2
  int v17; // r0
  Vec3 v18; // [sp+Ch] [bp-54h] BYREF
  _BYTE v19[12]; // [sp+18h] [bp-48h] BYREF
  float v20; // [sp+24h] [bp-3Ch]
  float v21; // [sp+34h] [bp-2Ch]
  float v22; // [sp+44h] [bp-1Ch]

  if ( FIELD_U32(a1, 1320) == 9 && (FIELD_U8(a1, 1212) & 1) != 0 )
  {
    v5 = 0;
    v6 = FIELD_U32(a1, 14536);
    if ( v6 == 1 || (v7 = FIELD_U32(a1, 14540), v5 = 1, v7 == 1) )
    {
      FIELD_U32(a1, 14532) = v5;
      v8 = (int *)(a1 + 14532);
    }
    else
    {
      v14 = FIELD_U32(a1, 14536);
      if ( v6 != 2 )
        v14 = 0;
      v15 = v7 == 2;
      v16 = 0;
      if ( !v15 )
        v14 = 1;
      if ( v6 != 2 )
        v14 = 0;
      v8 = (int *)(a1 + 14532);
      if ( v14 >= 2 )
      {
        if ( (unsigned int)*v8 < 2 )
          v16 = *v8;
        if ( sub_60235E50(a1 + 104 * v16 + 14340) == 1 )
        {
          v17 = *v8;
          if ( (unsigned int)*v8 >= 2 )
            v17 = 0;
          sub_602360C0(a1 + 104 * v17 + 14340);
        }
      }
      else
      {
        *v8 = v14;
      }
    }
    result = *v8;
    if ( *v8 <= 1 )
    {
      v10 = 0;
      sub_60793EDC(FIELD_U32(a1, 11360), (int)v19, 0);
      v18.x = v20;
      v18.y = v21;
      v18.z = v22;
      v11 = *v8;
      if ( (unsigned int)*v8 >= 2 )
        v11 = 0;
      sub_60236EC4(FIELD_S8(a1, 84), (EffectWrapper *)(a1 + 104 * v11 + 14324), 1238, &v18, 0, 0);
      if ( (unsigned int)*v8 < 2 )
        v10 = *v8;
      result = a1 + 4 * v10;
      FIELD_U32(result, 14536) = 1;
    }
  }
  else
  {
    v3 = (_DWORD *)(a1 + 14536);
    v2 = FIELD_U32(a1, 14536);
    v4 = (int *)(a1 + 11360);
    if ( v2 == 1 )
    {
      sub_60236074(a1 + 14340);
      *v3 = 2;
    }
    else if ( v2 == 2 )
    {
      sub_60793EDC(*v4, (int)v19, 0);
      v18.x = v20;
      v18.y = v21;
      v18.z = v22;
      sub_602368E0((int32x4_t *)(a1 + 14340));
      if ( !sub_60237208(a1 + 14324, &v18, 0, 0) )
      {
        sub_60237560(a1 + 14324);
        *v3 = 0;
      }
    }
    v12 = (_DWORD *)(a1 + 14540);
    result = FIELD_U32(a1, 14540);
    if ( result == 1 )
    {
      sub_60236074(a1 + 14444);
      result = 2;
      *v12 = 2;
    }
    else if ( result == 2 )
    {
      sub_60793EDC(*v4, (int)v19, 0);
      v18.x = v20;
      v18.y = v21;
      v18.z = v22;
      sub_602368E0((int32x4_t *)(a1 + 14444));
      v13 = a1 + 14428;
      result = sub_60237208(v13, &v18, 0, 0);
      if ( !result )
      {
        result = sub_60237560(v13);
        *v12 = 0;
      }
    }
  }
  return result;
}
