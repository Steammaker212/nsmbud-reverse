/* sub_608CA030
 * address: 0x608CA030   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CA030(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // r0
  _BOOL4 v10; // r0
  int v11; // r11
  int v12; // r5
  int v13; // r6
  float v14; // s16
  _BOOL4 v15; // r0
  bool v16; // zf
  int v17; // r0
  int v18; // r5
  float32x2_t v19; // d0
  float32x2_t v20; // d1
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int i; // r2
  int v25; // r3
  int v26; // r7
  int v27; // r4
  int v28; // t1

  result = FIELD_U32(a1, 540);
  if ( result )
  {
    v10 = sub_608B0F28((_DWORD *)result);
    if ( a2 )
    {
      if ( v10 )
      {
        v11 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 8))(FIELD_U32(a1, 556));
        if ( v11 >= 5 )
        {
          v12 = 4;
          v13 = 0;
          do
          {
            v14 = 0.0;
            if ( a2[1] > v12 - 4 )
              v14 = *(float *)(*a2 + v13);
            if ( v14 != sub_608B0EF4(*(_DWORD ***)(a1 + 540), v12) )
            {
              sub_608B0F38(*(_DWORD **)(a1 + 540), v12, v14);
              FIELD_U16(a1, 424) |= 8u;
            }
            ++v12;
            v13 += 4;
          }
          while ( v11 != v12 );
        }
      }
    }
    v15 = sub_608B0FF8(FIELD_U32(a1, 540));
    v16 = a4 == 0;
    if ( a4 )
      v16 = a3 == 0;
    if ( !v16 && v15 )
    {
      v17 = sub_608B0F64(FIELD_U32(a1, 540));
      sub_608CA260(a1, a3, a4, v17);
    }
    result = sub_608B1060(FIELD_U32(a1, 540));
    if ( a5 && result == 1 )
    {
      v18 = sub_608B1008(FIELD_U32(a1, 540));
      v21 = FIELD_U8(a5, 8);
      v22 = FIELD_U8(v18, 8);
      v23 = v21;
      if ( FIELD_U8(v18, 8) )
        v22 = 1;
      if ( FIELD_U8(a5, 8) )
        v23 = 1;
      if ( v23 != v22 && (FIELD_U8(v18, 8) = v21, !v21) )
      {
        v28 = FIELD_U16(a1, 424);
        FIELD_U16(a1, 424) = v28 | 0x48;
        return v28 | 0x48;
      }
      else
      {
        v19.n64_u32[0] = 0;
        v20.n64_u32[0] = FIELD_U32(a5, 12);
        v19.n64_f32[0] = vmax_f32(v20, v19).n64_f32[0];
        if ( v19.n64_f32[0] != FIELD_F32(v18, 12) )
        {
          FIELD_U32(v18, 12) = v19.n64_u32[0];
          FIELD_U16(a1, 424) |= 0x48u;
        }
        result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 8))(FIELD_U32(a1, 556));
        if ( result >= 1 )
        {
          for ( i = 0; i != result; ++i )
          {
            v25 = 0;
            if ( FIELD_U32(a5, 4) > i )
              v25 = *(unsigned __int8 *)(*(_DWORD *)a5 + i);
            v26 = FIELD_U32(v18, 4);
            v27 = 0;
            if ( v26 > i )
              v27 = *(unsigned __int8 *)(*(_DWORD *)v18 + i);
            if ( v25 != v27 )
            {
              if ( v26 > i )
                *(_BYTE *)(*(_DWORD *)v18 + i) = v25;
              FIELD_U16(a1, 424) |= 8u;
            }
          }
        }
      }
    }
  }
  return result;
}
