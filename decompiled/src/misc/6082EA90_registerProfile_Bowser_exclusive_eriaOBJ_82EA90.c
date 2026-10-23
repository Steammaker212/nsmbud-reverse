/* registerProfile_Bowser_exclusive_eriaOBJ_82EA90
 * address: 0x6082EA90   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Bowser_exclusive_eriaOBJ_82EA90()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4DEC;
  Profile__ctor(&stru_60CC6F70, Actor_Bowser_exclusive_eriaOBJ_build, 0x24Au, &v0, &stru_60B0DFFC, 0);
}
