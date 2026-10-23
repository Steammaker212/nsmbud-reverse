/* sub_604470DC
 * address: 0x604470DC   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604470DC(int a1, int a2, const char **a3)
{
  int v6; // r4
  unsigned int result; // r0
  int v8; // r10
  const char *v9; // r7
  size_t v10; // r6
  int v11; // r0
  int v12; // r3
  int *v13; // r5
  int v14; // r2
  int v15; // r5
  int v16; // r4
  size_t v17; // r4
  size_t v18; // r2
  unsigned int v19; // r1
  unsigned int v20; // r6
  int v21; // r1

  v6 = FIELD_U32(a2, 20);
  result = (*((int (__fastcall **)(const char **))*a3 + 3))(a3);
  v8 = FIELD_U32(v6, 112);
  if ( !v8 )
    return result;
  v9 = a3[1];
  if ( v9 )
    v10 = strlen(a3[1]);
  else
    v10 = 0;
  v11 = FIELD_U16(v8, 12);
  v13 = (int *)(v8 + 8 + 16 * v11);
  v12 = *v13;
  if ( FIELD_U32(v8, 8) < *v13 )
  {
    v14 = v8 + 8;
    do
    {
      v15 = 0;
      if ( v10 > v12 >> 3 )
        v15 = ((unsigned __int8)v9[v10 + ~(v12 >> 3)] >> (v12 & 7)) & 1;
      v16 = *(_DWORD *)(v14 + 16 * v11);
      v11 = *(unsigned __int16 *)(v14 + 16 * v11 + 2 * v15 + 4);
      v13 = (int *)(v14 + 16 * v11);
      v12 = *v13;
    }
    while ( v16 < *v13 );
  }
  result = v13[2];
  v17 = *(unsigned __int16 *)result;
  v18 = v17;
  if ( v10 < v17 )
    v18 = v10;
  if ( v18 )
  {
    result = memcmp((const void *)(result + 2), v9, v18);
    v19 = result;
    if ( !result )
      v19 = 1;
    if ( v10 < v17 || result )
      goto LABEL_21;
  }
  else if ( v10 < v17 )
  {
    return result;
  }
  v19 = 0;
  if ( v17 < v10 )
    v19 = -1;
LABEL_21:
  if ( !v19 )
  {
    result = (unsigned int)v13 - v8 - 24;
    if ( (result & 0x80000000) == 0 )
    {
      v20 = *(_DWORD *)(FIELD_U32(a2, 20) + 104) + 96 * (result >> 4);
      sub_60873E60(a1 + 32, v20);
      FIELD_U32(a1, 120) = v20;
      FIELD_U32(a1, 4) = 0;
      FIELD_F32(a1, 8) = (float)FIELD_S32(v20, 80);
      FIELD_F32(a1, 16) = (float)FIELD_S32(v20, 80);
      FIELD_U32(a1, 24) = 1065353216;
      AnimationCtrl_setRepeat((ModelAnimation *)(a1 + 4), 1);
      FIELD_U32(a1, 20) = 0;
      FIELD_U32(a1, 28) |= 2u;
      sub_6041838C((ModelAnimation *)(a1 + 4));
      result = FIELD_U32(a1, 124);
      if ( result )
      {
        v21 = FIELD_U32(a1, 128);
        FIELD_U32(a1, 124) = result;
        FIELD_U32(a1, 128) = v21;
        if ( FIELD_U32(a1, 120) )
        {
          nn__g3d__ShapeAnimObj__Bind(a1 + 32, FIELD_U32(result, 40));
          return nn__g3d__ShapeAnimObj__ClearResult(a1 + 32);
        }
      }
    }
  }
  return result;
}
