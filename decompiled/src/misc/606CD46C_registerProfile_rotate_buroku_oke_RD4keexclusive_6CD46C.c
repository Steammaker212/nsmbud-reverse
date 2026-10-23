/* registerProfile_rotate_buroku_oke_RD4keexclusive_6CD46C
 * address: 0x606CD46C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_buroku_oke_RD4keexclusive_6CD46C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7AC4;
  Profile__ctor(&stru_60CBB2AC, Actor_rotate_buroku_oke_RD4keexclusive_build, 0x9Fu, &v0, &stru_60B08B54, 2);
}
