/* sub_6097DC6C
 * address: 0x6097DC6C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097DC6C(void *a1, int a2, int a3, _BYTE *a4)
{
  const char **v7; // r7
  const char **v8; // r4
  const char *v9; // r5
  int result; // r0
  const char *v11; // r7
  unsigned int v12; // t1
  float v13; // s4
  float v14; // s6

  v7 = sub_6085982C(a2, "CaptureBGColor");
  v8 = sub_6085982C(a2, "CaptureBGAlpha");
  if ( v7 && *((_WORD *)v7 + 4) == 3 )
  {
    v9 = v7[1];
    result = operator_new_8DE25C(0x10u, a1, 4);
    v12 = (unsigned __int8)v9[(_DWORD)v7];
    v11 = &v9[(_DWORD)v7];
    v13 = (float)*((unsigned __int8 *)v11 + 4);
    v14 = (float)*((unsigned __int8 *)v11 + 8);
    FIELD_U32(result, 12) = 0;
    *(float *)result = (float)v12 / 255.0;
    FIELD_F32(result, 4) = v13 / 255.0;
    FIELD_F32(result, 8) = v14 / 255.0;
    if ( v8 )
      FIELD_F32(result, 12) = (float)*(int *)&v8[1][(_DWORD)v8] / 255.0;
  }
  else
  {
    result = 0;
    if ( v8 && *(_DWORD *)&v8[1][(_DWORD)v8] == 255 )
      *a4 |= 2u;
  }
  return result;
}
