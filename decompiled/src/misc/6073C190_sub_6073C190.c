/* sub_6073C190
 * address: 0x6073C190   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073C190(int a1)
{
  int result; // r0
  int *v3; // r5

  v3 = (int *)(a1 + 8008);
  result = FIELD_U32(a1, 8008);
  switch ( result )
  {
    case 2:
      result = FIELD_U16(a1, 8038);
      if ( !FIELD_U16(a1, 8038) )
        return (int)sub_605D79D0(a1, (StateBase *)&dword_60CBE088, 0);
      break;
    case 1:
      result = FIELD_U8(a1, 6263);
      if ( (result & 2) != 0 )
      {
        FIELD_U16(a1, 8038) = 30;
        result = 2;
        *v3 = 2;
      }
      break;
    case 0:
      result = sub_605E3BBC(a1);
      if ( !result )
      {
        FIELD_U32(a1, 120) = 0;
        result = *v3 + 1;
        *v3 = result;
      }
      break;
  }
  return result;
}
