/* sub_600272B8
 * address: 0x600272B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600272B8()
{
  int v0; // r4

  v0 = 0;
  if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0
    && !sub_6019B154(FIELD_U8(LevelInfo_instance, 16), FIELD_U8(LevelInfo_instance, 17)) )
  {
    sub_603F472C(AreaTask_intance);
    return 1;
  }
  return v0;
}
