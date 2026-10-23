/* sub_604571EC
 * address: 0x604571EC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604571EC(int a1, unsigned int a2, int a3, int a4, float a5)
{
  unsigned int v6; // r6
  int result; // r0
  int v10; // r1
  int *v11; // r5
  float **v12; // r8
  float **v13; // r0
  float *v14; // r4
  float *v15; // t1
  int v16; // r0
  int v17; // t1
  float *v18; // r7

  v6 = a2;
  result = FIELD_U8(a1, 2596) & (1 << a2);
  if ( (_BYTE)result )
  {
    result = FIELD_U8(a1, 2597);
    if ( !FIELD_U8(a1, 2597) )
    {
      if ( a2 >= 4 )
        v6 = 0;
      result = a1 + 600 * v6;
      v11 = (int *)(result + 204);
      v10 = FIELD_U32(result, 204);
      v12 = (float **)(result + 196);
      if ( v10 >= FIELD_U32(result, 216) )
      {
        if ( a4 != 1 )
          return result;
        if ( v10 < 1 )
          v14 = 0;
        else
          v14 = *v12;
        if ( v14 )
          v14 -= 7;
        sead__ListNode__erase(v14 + 7);
        --*v11;
        v16 = a1 + 600 * v6;
        v17 = FIELD_U32(v16, 208);
        v13 = (float **)(v16 + 208);
        *(_DWORD *)v14 = v17;
        *v13 = v14;
      }
      else
      {
        v15 = *(float **)(result + 208);
        v13 = (float **)(result + 208);
        v14 = v15;
      }
      v18 = 0;
      if ( v14 )
      {
        v18 = v14;
        *v13 = *(float **)v14;
      }
      v18[4] = 0.0;
      v18[3] = 0.0;
      v18[2] = 0.0;
      *(_DWORD *)v18 = 2;
      v18[1] = 0.0;
      v18[7] = 0.0;
      v18[8] = 0.0;
      sub_608DE510(v12, v18 + 7);
      result = *v11 + 1;
      *v11 = result;
      *v18 = 0.0;
      *((_DWORD *)v18 + 1) = a3;
      v18[2] = a5;
      v18[3] = 0.0;
      v18[6] = 0.0;
    }
  }
  return result;
}
