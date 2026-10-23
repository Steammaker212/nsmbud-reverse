/* sub_601DAB64
 * address: 0x601DAB64   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601DAB64()
{
  int v0; // r6
  int v1; // r4
  int v2; // r5

  v0 = dword_60CC6D78;
  v1 = sub_601A443C(dword_60C89E18, FIELD_U32(dword_60CC6D78, 412), FIELD_U32(dword_60CC6D78, 416));
  v2 = 4096;
  if ( !sub_6018301C(v1, FIELD_U32(v0, 420), 4096) )
  {
    v2 = 0x2000;
    if ( !sub_6018301C(v1, FIELD_U32(v0, 420), 0x2000) )
    {
      v2 = sub_6018301C(v1, FIELD_U32(v0, 420), 0x4000);
      if ( v2 )
        return 0x4000;
    }
  }
  return v2;
}
