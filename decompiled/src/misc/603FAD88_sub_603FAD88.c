/* sub_603FAD88
 * address: 0x603FAD88   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_603FAD88()
{
  int v0; // r1
  int result; // r0
  int v2; // r2
  bool v3; // zf
  int v4; // r3
  bool v5; // zf

  v0 = dword_60CC6D78;
  result = 0;
  v2 = FIELD_U32(dword_60CC6D78, 32);
  v3 = v2 == 2;
  if ( v2 == 2 )
    v3 = (FIELD_U8(dword_60CC6D78, 44) & 3) == 0;
  if ( v3 )
  {
    v4 = FIELD_U8(LevelInfo_instance, 16);
    v5 = v4 == 7;
    if ( v4 == 7 )
      v5 = FIELD_U8(LevelInfo_instance, 17) == 42;
    if ( v5 )
    {
      FIELD_U8(dword_60CC6D78, 507) = 1;
      FIELD_U16(v0, 109048) = 10;
      return 1;
    }
  }
  return result;
}
