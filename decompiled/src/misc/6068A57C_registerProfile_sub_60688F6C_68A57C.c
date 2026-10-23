/* registerProfile_sub_60688F6C_68A57C
 * address: 0x6068A57C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_sub_60688F6C_68A57C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB8474 = 0;
  dword_60CB8478 = 0;
  dword_60CB847C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6815;
  Profile__ctor(&stru_60CB8480, sub_60688F6C, 0xDEu, &v0, &stru_60B07E04, 2);
}
