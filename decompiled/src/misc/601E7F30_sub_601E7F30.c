/* sub_601E7F30
 * address: 0x601E7F30   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E7F30()
{
  int v0; // r1
  int *v1; // r0
  int *v2; // r0
  int (**v4)(); // [sp+0h] [bp-10h] BYREF
  const char *v5; // [sp+4h] [bp-Ch]

  v0 = 8;
  switch ( FIELD_U32(dword_60CC6D78, 412) )
  {
    case 0:
      v4 = &sead__SafeStringBase__vtable;
      v5 = "W1S0";
      v1 = sub_601E03D4(0, 0, &v4);
      v0 = 2;
      if ( v1[24] == FIELD_U32(dword_60CC6D78, 420) )
        v0 = 8;
      break;
    case 1:
      v4 = &sead__SafeStringBase__vtable;
      v5 = "W2S0";
      v2 = sub_601E03D4(1, 0, &v4);
      v0 = 4;
      if ( v2[24] == FIELD_U32(dword_60CC6D78, 420) )
        v0 = 16;
      break;
    case 2:
      break;
    case 3:
      v0 = 16;
      break;
    case 4:
      v0 = 32;
      if ( FIELD_U32(dword_60CC6D78, 416) == 1 )
        v0 = 64;
      break;
    case 5:
      v0 = 128;
      break;
    case 6:
      v0 = 256;
      break;
    case 7:
      v0 = 512;
      break;
    case 8:
      v0 = 1024;
      break;
    default:
      v0 = 2;
      break;
  }
  sub_6080D540(dword_60CC6B0C, v0, 1.0);
  return sub_601D07C8(dword_60C8AEF0);
}
