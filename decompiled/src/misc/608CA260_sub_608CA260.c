/* sub_608CA260
 * address: 0x608CA260   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CA260(int a1, int a2, float *a3, int a4)
{
  int result; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r0
  _WORD *v11; // r5
  int i; // r2
  int v13; // r3
  int v14; // r6
  int v15; // r7
  int v16; // r7
  float *v17; // r1
  float *v18; // r2
  int v19; // r3
  float *v20; // r1
  float *v21; // r2

  result = FIELD_U8(a4, 192);
  v8 = FIELD_U8(a2, 192);
  v9 = result;
  if ( result )
    v9 = 1;
  if ( FIELD_U8(a2, 192) )
    v8 = 1;
  if ( v8 != v9 )
  {
    FIELD_U8(a4, 192) = FIELD_U8(a2, 192);
    FIELD_U16(a1, 424) |= 8u;
    result = FIELD_U8(a4, 192);
  }
  if ( result )
  {
    v10 = FIELD_U32(a2, 200);
    v11 = (_WORD *)(a1 + 424);
    if ( FIELD_U32(a4, 200) < v10 )
      v10 = FIELD_U32(a4, 200);
    if ( v10 > 0 )
    {
      for ( i = 0; i < v10; ++i )
      {
        v13 = FIELD_U32(a4, 196);
        v14 = *(unsigned __int8 *)(v13 + i);
        v15 = *(unsigned __int8 *)(FIELD_U32(a2, 196) + i);
        if ( *(_BYTE *)(v13 + i) )
          v14 = 1;
        if ( *(_BYTE *)(FIELD_U32(a2, 196) + i) )
          v15 = 1;
        if ( v15 != v14 )
        {
          *(_BYTE *)(v13 + i) = *(_BYTE *)(FIELD_U32(a2, 196) + i);
          *v11 |= 8u;
        }
      }
    }
    v16 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 8))(FIELD_U32(a1, 556));
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 4))(FIELD_U32(a1, 556)) * v16;
    if ( result >= 1 )
    {
      v17 = a3;
      v18 = (float *)a4;
      v19 = result;
      do
      {
        if ( *v17 != *v18 )
        {
          *v18 = *v17;
          *v11 |= 8u;
        }
        ++v17;
        ++v18;
        --v19;
      }
      while ( v19 );
      v20 = a3 + 24;
      v21 = (float *)(a4 + 96);
      do
      {
        if ( *v20 != *v21 )
        {
          *v21 = *v20;
          *v11 |= 8u;
        }
        ++v20;
        ++v21;
        --result;
      }
      while ( result );
    }
  }
  return result;
}
