/* sub_606EBCF0
 * address: 0x606EBCF0   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EBCF0(int a1, _BYTE *a2)
{
  int v2; // r6
  int result; // r0
  int *i; // r7
  bool v7; // zf
  int *j; // r7
  bool v9; // zf
  float v10; // [sp+4h] [bp-44h] BYREF
  float v11; // [sp+8h] [bp-40h]
  float v12; // [sp+Ch] [bp-3Ch]

  if ( FIELD_U8(a1, 7472) )
  {
    result = 7272;
    for ( i = *(int **)(a1 + 7272); i; i = (int *)i[1] )
    {
      result = *i;
      v7 = *i == 0;
      if ( *i )
      {
        v2 = FIELD_U32(result, 2196);
        v7 = v2 == 0;
      }
      if ( !v7 )
      {
        result = FIELD_U8(v2, 533);
        if ( result == 2 )
        {
          v10 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
          v11 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
          v12 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
          SE_OBJ_TRPLN_BOUND_ref(v2, &v10);
          if ( FIELD_U8(a1, 7473) == 1 )
            FIELD_U32(v2, 1204) |= 0x400u;
          result = (unsigned __int8)*a2;
          if ( !*a2 )
          {
            v10 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
            v11 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
            v12 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
            lift_trampoline_ref(a1 + 6100, &v10);
            sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6532));
            result = 1;
            *a2 = 1;
          }
        }
      }
    }
  }
  else
  {
    result = 6616;
    for ( j = *(int **)(a1 + 6616); j; j = (int *)j[1] )
    {
      result = *j;
      v9 = *j == 0;
      if ( *j )
      {
        v2 = FIELD_U32(result, 2196);
        v9 = v2 == 0;
      }
      if ( !v9 )
      {
        result = FIELD_U8(v2, 533);
        if ( result == 2 )
        {
          v10 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
          v11 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
          v12 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
          SE_OBJ_TRPLN_BOUND_ref(v2, &v10);
          if ( FIELD_U8(a1, 7473) == 1 )
            FIELD_U32(v2, 1204) |= 0x400u;
          result = (unsigned __int8)*a2;
          if ( !*a2 )
          {
            v10 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
            v11 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
            v12 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
            lift_trampoline_ref(a1 + 6100, &v10);
            sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6532));
            result = 1;
            *a2 = 1;
          }
        }
      }
    }
  }
  return result;
}
