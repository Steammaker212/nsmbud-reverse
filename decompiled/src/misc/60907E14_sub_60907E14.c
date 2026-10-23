/* sub_60907E14
 * address: 0x60907E14   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60907E14()
{
  dword_60CCF014 = (int)&unk_60CCF01C;
  dword_60CCF010 = (int)&BufferedSafeStringBase_char_vtable_probably;
  dword_60CCF018 = 1024;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CCF010);
  *(_BYTE *)dword_60CCF014 = 0;
  dword_60CCF010 = (int)&off_60BFA9DC;
  sub_6090805C(&unk_60CCF41C);
  return sub_60000288();
}
