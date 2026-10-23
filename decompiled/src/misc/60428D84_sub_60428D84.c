/* sub_60428D84
 * address: 0x60428D84   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60428D84(int result, int *a2, int a3, int a4, int a5, int a6)
{
  unsigned __int8 v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r7
  int v13; // r0
  int v14; // r0
  char *v15; // r6
  int v16; // r0
  int v17; // r2
  int v18; // r1
  void *v19; // r1
  int v20; // r0
  int v21; // r0

  *a2 = result + 16;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( FIELD_U32(result, 20) )
  {
    v9 = FIELD_U8(result, 124);
    v10 = gsys_weight_ref();
    v11 = sub_6043F1A4(a3, v10, off_60BFA474[*(unsigned __int8 *)(FIELD_U32(a6, 4) + 102)]);
    v12 = gsys_assign_type_ref(v11);
    v13 = sub_6043E8A4(*a2, a4);
    sub_6043F1A4(a3, v12, v13);
    v14 = (unsigned __int8)(v9 & (1 << a5));
    if ( (v9 & (unsigned __int8)(1 << a5)) != 0 )
      v14 = a5;
    v15 = off_60BFA474[v14];
    v16 = gsys_assign_variation_ref();
    sub_6043F1A4(a3, v16, v15);
    result = sub_6043F5A0(a3, *a2 + 80);
    a2[2] = result;
    if ( result )
    {
      v17 = *(_DWORD *)(*a2 + 4);
      a2[1] = v17;
      v18 = FIELD_U32(v17, 184);
      if ( v18 )
      {
        result = *(_DWORD *)(FIELD_U32(v18, 36) - 613566756 * ((result - FIELD_U32(v17, 120)) >> 3));
        a2[3] = result;
        if ( result )
          return result;
      }
      else
      {
        result = a2[3];
        if ( result )
          return result;
      }
      result = dword_60CD0B50;
      v19 = *(void **)(dword_60CD0B50 + 60);
      if ( v19 )
      {
        v20 = operator_new_8DE25C(0x64u, v19, 4);
        v21 = sub_60420330(v20);
        a2[3] = v21;
        return sub_60420378(v21, a2[1], a2[2]);
      }
    }
  }
  return result;
}
