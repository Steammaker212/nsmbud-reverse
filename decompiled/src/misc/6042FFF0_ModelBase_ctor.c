/* ModelBase_ctor
 * address: 0x6042FFF0   size: 76   group: misc
 * sym: # ModelBase_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

#90 *__fastcall ModelBase_ctor(#90 *this)
{
  *(_DWORD *)this = off_60BFA6EC;
  sead_IDisposer_ctor((sead_IDisposer *)this + 1);
  *(_DWORD *)this = off_60BFA600;
  *((_DWORD *)this + 4) = &off_60BFA6DC;
  *((_DWORD *)this + 8) = -2;
  *((_DWORD *)this + 9) = -2;
  return this;
}
