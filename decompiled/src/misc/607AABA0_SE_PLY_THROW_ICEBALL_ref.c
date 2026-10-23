/* SE_PLY_THROW_ICEBALL_ref
 * address: 0x607AABA0   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_THROW_ICEBALL_ref(int a1, int a2)
{
  int result; // r0
  unsigned int v5; // r0
  int v6; // r2
  unsigned int v7; // r6
  int v8; // r3
  int *v9; // r0
  int v10; // r3
  int v11; // r0
  float v12; // s18
  float v13; // s16
  float v14; // s20
  int v15; // r0
  float v16[2]; // [sp+Ch] [bp-94h] BYREF
  float v17; // [sp+14h] [bp-8Ch]
  float v18[3]; // [sp+18h] [bp-88h] BYREF
  float v19; // [sp+24h] [bp-7Ch]
  float v20; // [sp+28h] [bp-78h]
  float v21; // [sp+2Ch] [bp-74h]
  float v22; // [sp+30h] [bp-70h]
  float v23; // [sp+34h] [bp-6Ch]
  float v24; // [sp+38h] [bp-68h]
  float v25; // [sp+3Ch] [bp-64h]
  float v26; // [sp+40h] [bp-60h]
  float v27; // [sp+44h] [bp-5Ch]
  _DWORD v28[22]; // [sp+48h] [bp-58h] BYREF

  result = FIELD_U32(a1, 1320);
  if ( result == 2 )
  {
    v5 = FIELD_U8(a1, 84);
    v6 = (char)v5;
    if ( v5 >= 4 )
      v6 = 0;
    if ( *(int *)(EnemyCounterMaybe_instance + 8 * v6 + 100) < 6 )
      goto LABEL_17;
    sub_6000A2E8(EnemyCounterMaybe_instance, (char)v5);
    result = FIELD_U32(a1, 1320);
  }
  v7 = result - 5;
  if ( (unsigned int)(result - 5) < 2 )
  {
    result = FIELD_S8(a1, 84);
    v8 = result;
    if ( (unsigned __int8)result >= 4u )
      v8 = 0;
    if ( *(int *)(EnemyCounterMaybe_instance + 8 * v8 + 132) <= 5 && v7 < 2 )
    {
      if ( a2 )
        goto LABEL_15;
      if ( (unsigned __int8)result >= 4u )
        result = 0;
      result = *(_DWORD *)(EnemyCounterMaybe_instance + 8 * result + 136);
      if ( result < 2 )
      {
LABEL_15:
        memset(v28, 0, 44);
        sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_THROW_ICEBALL", 0, 0);
        v9 = &dword_60AF3490;
LABEL_25:
        v28[3] = Profile__get(*v9);
        v28[7] = sub_608336A8(FIELD_U32(a1, 12048));
        v28[0] = ((FIELD_U8(a1, 87) & 0xF) << 12)
               | (a2 << 16)
               | ((FIELD_U8(a1, 86) & 0xF) << 8)
               | (unsigned __int8)(16 * FIELD_U8(a1, 12048))
               | FIELD_U8(a1, 84) & 0xF;
        v11 = FIELD_U32(a1, 648);
        LODWORD(v16[0]) = &sead__SafeStringBase__vtable;
        LODWORD(v16[1]) = "wrist_l1";
        (*(void (__fastcall **)(_DWORD, float *, float *))(**(_DWORD **)(v11 + 4) + 144))(
          FIELD_U32(v11, 4),
          v18,
          v16);
        v12 = v19 + (float)((float)((float)(v18[1] * 4.0) - v18[0]) + (float)(v18[2] * 4.0));
        v19 = v12;
        v13 = v23 + (float)((float)((float)(v21 * 4.0) - v20) + (float)(v22 * 4.0));
        v23 = v13;
        v14 = v27 + (float)((float)((float)(v25 * 4.0) - v24) + (float)(v26 * 4.0));
        v27 = v14;
        if ( a2 == 1 )
        {
          sub_60793F04(*(_DWORD *)(FIELD_U32(a1, 648) + 4), v16);
          v12 = v16[0]
              + (float)(sqrtf(
                          (float)((float)(v17 - v14) * (float)(v17 - v14))
                        + (float)((float)(v16[0] - v12) * (float)(v16[0] - v12)))
                      * flt_60B0A898[FIELD_U32(a1, 12048)]);
        }
        v15 = FIELD_U32(a1, 116);
        *(float *)&v28[4] = v12;
        *(float *)&v28[5] = v13;
        v28[6] = v15;
        return (int)sub_600080BC((_DWORD *)ActorMgr__instance, v28);
      }
    }
    return result;
  }
  if ( result != 2 )
    return result;
LABEL_17:
  result = FIELD_S8(a1, 84);
  v10 = result;
  if ( (unsigned __int8)result >= 4u )
    v10 = 0;
  if ( *(int *)(EnemyCounterMaybe_instance + 8 * v10 + 100) < 6 )
  {
    if ( a2 )
      goto LABEL_24;
    if ( (unsigned __int8)result >= 4u )
      result = 0;
    result = *(_DWORD *)(EnemyCounterMaybe_instance + 8 * result + 104);
    if ( result < 2 )
    {
LABEL_24:
      memset(v28, 0, 44);
      sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_THROW_FIRE", 0, 0);
      v9 = &dword_60AF3498;
      goto LABEL_25;
    }
  }
  return result;
}
