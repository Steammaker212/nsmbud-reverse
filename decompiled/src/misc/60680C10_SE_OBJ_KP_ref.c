/* SE_OBJ_KP_ref
 * address: 0x60680C10   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_KP_ref(_DWORD *a1)
{
  int *v2; // r5
  _BYTE *v3; // r6
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  float v9; // s0
  int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r2
  _DWORD *v13; // r2
  _DWORD *v14; // r3
  _DWORD *v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  _DWORD *v19; // r2
  int v20; // t1
  int result; // r0
  float v22; // r1
  int v23; // r5
  int v24; // r6
  float v25; // r1
  int v26; // r5
  int v27; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = a1 + 1877;
  v3 = a1 + 1890;
  if ( !a1[1877] )
  {
    if ( !*v3 )
    {
      v8 = *a1;
      v9 = 16.0;
      goto LABEL_8;
    }
    v4 = (_DWORD *)a1[1528];
    v5 = v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += 4 * v7;
    if ( *(float *)(*(_DWORD *)v5 + 20) < 79.0 )
    {
      v8 = *a1;
      v9 = 40.0;
LABEL_8:
      (*(void (__fastcall **)(_DWORD *, _DWORD, float))(v8 + 228))(a1, 0, v9);
      goto LABEL_10;
    }
    a1[1863] = 0;
    (*(void (__fastcall **)(_DWORD *, int, float))(*a1 + 228))(a1, 1, 16.0);
  }
LABEL_10:
  if ( *v3 )
  {
    v10 = a1[1888];
    a1[1888] = v10 + 1;
    if ( v10 >= 99 )
    {
      a1[1863] = 1;
      v11 = a1[1881];
      v12 = v11;
      if ( *v2 == 1 )
        v12 = v11 + 16;
      if ( v12 >= 0x20 )
        v12 = 0;
      v13 = (_DWORD *)(EnemyCounterMaybe_instance + 20 * v12);
      v14 = v13 + 74;
      if ( v13[74] == 256 )
      {
        *v3 = 1;
        (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB8238);
      }
      else
      {
        a1[1880] = v13[71];
        v20 = v13[73];
        v19 = v13 + 73;
        a1[1882] = 10 * v20;
        *v3 = *((_BYTE *)v19 + 8);
        *((_BYTE *)a1 + 7561) = *((_BYTE *)v19 + 9);
        a1[1881] = v11 + 1;
        *((_BYTE *)a1 + 7597) = 0;
        if ( *v14 == 1 )
        {
          *((_BYTE *)a1 + 7597) = 1;
          a1[1882] = *v19;
        }
        (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB8218);
      }
    }
  }
  else
  {
    v15 = (_DWORD *)a1[1528];
    v16 = v15[3];
    v17 = v15[2];
    v18 = v15[17];
    if ( v17 > v18 )
      v16 += 4 * v18;
    if ( (*(_BYTE *)(*(_DWORD *)v16 + 28) & 0x20) != 0 )
    {
      a1[1863] = 0;
      (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB81B8);
    }
  }
  result = *v2;
  if ( *v2 == 1 )
  {
    v25 = *((float *)a1 + 28);
    v26 = a1[2];
    v27 = Global_BasicSoundActor2;
    position.x = (float)a1[27];
    position.y = v25;
    mapPositionToScreen(&out, &position);
    return SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v27, "SE_OBJ_KP_PUNCH_ATTACKSIGN", v26, &out, 0);
  }
  else if ( !result )
  {
    v22 = *((float *)a1 + 28);
    v23 = a1[2];
    v24 = Global_BasicSoundActor2;
    position.x = (float)a1[27];
    position.y = v22;
    mapPositionToScreen(&out, &position);
    return SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v24, "SE_OBJ_KP_HAND_ATTACKSIGN", v23, &out, 0);
  }
  return result;
}
