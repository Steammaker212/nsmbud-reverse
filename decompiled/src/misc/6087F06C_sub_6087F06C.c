/* sub_6087F06C
 * address: 0x6087F06C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087F06C(int a1)
{
  void (__fastcall *v2)(int *); // r8
  void (__fastcall *v3)(int *); // r11
  int v4; // r2
  int v5; // r1
  int result; // r0
  void (__fastcall *v7)(int *); // r7
  bool v8; // zf
  int v9; // r5
  int v10; // r6
  float v11; // s0
  int v12; // r0
  float v13; // s2
  int v14; // r1
  int v15; // r0
  int v16; // r5
  int v17; // r6
  float v18; // s0
  int v19; // r0
  float v20; // s2
  int v21; // r1
  int v22; // r0
  int v23; // [sp+4h] [bp-3Ch] BYREF
  int v24; // [sp+8h] [bp-38h]
  int v25; // [sp+Ch] [bp-34h]
  float v26; // [sp+10h] [bp-30h]
  int v27; // [sp+14h] [bp-2Ch]
  int v28; // [sp+18h] [bp-28h]

  v2 = 0;
  v3 = 0;
  v4 = FIELD_U32(a1, 712);
  v5 = FIELD_U32(a1, 704);
  result = FIELD_U32(a1, 708);
  if ( v4 )
    v2 = *(void (__fastcall **)(int *))(v4 + 32);
  if ( v5 )
    v3 = *(void (__fastcall **)(int *))(v5 + 32);
  if ( result )
    v7 = *(void (__fastcall **)(int *))(result + 32);
  else
    v7 = 0;
  v8 = v2 == 0;
  if ( !v2 )
    v8 = v3 == 0;
  if ( !v8 || v7 )
  {
    result = FIELD_U32(a1, 40);
    if ( result >= 1 )
    {
      if ( v2 )
      {
        v9 = 0;
        v10 = 0;
        do
        {
          v11 = FIELD_F32(a1, 68);
          v12 = FIELD_U32(a1, 148) + v9;
          v13 = FIELD_F32(v12, 8);
          v14 = FIELD_U32(v12, 12);
          v25 = a1;
          v26 = v11 - v13;
          v27 = v14;
          v28 = v10;
          v23 = FIELD_U32(v12, 16);
          v24 = FIELD_U32(v12, 20);
          v2(&v23);
          if ( v3 )
            v3(&v23);
          if ( v7 )
            v7(&v23);
          ++v10;
          *(_DWORD *)(FIELD_U32(a1, 148) + v9 + 20) = 0;
          v15 = FIELD_U32(a1, 148) + v9;
          v9 += 24;
          FIELD_U32(v15, 16) = 0;
          result = FIELD_U32(a1, 40);
        }
        while ( v10 < result );
      }
      else
      {
        v16 = 0;
        v17 = 0;
        do
        {
          v18 = FIELD_F32(a1, 68);
          v19 = FIELD_U32(a1, 148) + v16;
          v20 = FIELD_F32(v19, 8);
          v21 = FIELD_U32(v19, 12);
          v25 = a1;
          v26 = v18 - v20;
          v27 = v21;
          v28 = v17;
          v23 = FIELD_U32(v19, 16);
          v24 = FIELD_U32(v19, 20);
          if ( v3 )
            v3(&v23);
          if ( v7 )
            v7(&v23);
          ++v17;
          *(_DWORD *)(FIELD_U32(a1, 148) + v16 + 20) = 0;
          v22 = FIELD_U32(a1, 148) + v16;
          v16 += 24;
          FIELD_U32(v22, 16) = 0;
          result = FIELD_U32(a1, 40);
        }
        while ( v17 < result );
      }
    }
  }
  return result;
}
