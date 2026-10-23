/* sub_606F8DE4
 * address: 0x606F8DE4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F8DE4(int result)
{
  int *v1; // r1
  int v2; // r2
  int v3; // r2
  int v4; // r1
  unsigned int v5; // r1

  v1 = (int *)(result + 6132);
  v2 = FIELD_U32(result, 6132);
  switch ( v2 )
  {
    case 3:
      FIELD_U8(result, 6141) = 1;
      break;
    case 2:
      v4 = FIELD_U32(result, 6128);
      FIELD_U32(result, 6128) = v4 - 1;
      if ( v4 <= 1 )
      {
        v5 = FIELD_U32(result, 6136) - 1;
        if ( v5 <= 7 )
          return ((int (*)(void))((char *)dword_606F8E94 + dword_606F8E94[v5]))();
      }
      break;
    case 1:
      FIELD_U32(result, 6128) = *(_DWORD *)(FIELD_U32(result, 6100) + 6168);
      v3 = 2;
      *v1 = 2;
      result = *(unsigned __int8 *)(FIELD_U32(result, 6144) + 8169);
      if ( result )
        v3 = 3;
      *v1 = v3;
      break;
  }
  return result;
}
