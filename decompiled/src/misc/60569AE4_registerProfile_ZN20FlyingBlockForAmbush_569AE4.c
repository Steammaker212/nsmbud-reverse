/* registerProfile_ZN20FlyingBlockForAmbush_569AE4
 * address: 0x60569AE4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_ZN20FlyingBlockForAmbush_569AE4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1598;
  Profile__ctor(&stru_60CAE5C4, FlyingBlockForAmbush__create, 0x13Fu, &v1, &stru_60B042B0, 4098);
  dword_60CAE5E0 = ++CurrentStateID;
  dword_60CAE5E4 = 416;
  dword_60CAE5E8 = 1;
  dword_60CAE5EC = 420;
  dword_60CAE5F0 = 1;
  dword_60CAE5F4 = 424;
  dword_60CAE5F8 = 1;
  dword_60CAE5DC = (int)&off_60C021BC;
  dword_60CAE5FC = (int)&dword_60CAE31C;
  return &dword_60CAE5DC;
}
