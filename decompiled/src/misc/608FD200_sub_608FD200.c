/* sub_608FD200
 * address: 0x608FD200   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608FD200()
{
  bool v0; // zf
  int v1; // r0
  unsigned __int8 *v2; // r1

  v0 = dword_60CCEF74 == 0;
  if ( dword_60CCEF74 )
    v0 = FIELD_U8(dword_60CCEF74, 32) == 0;
  if ( v0 )
    return sub_608FCCAC();
  v1 = FIELD_U32(dword_60CCEF74, 16);
  v2 = (unsigned __int8 *)&unk_60B3B9BC;
  if ( (unsigned int)(2 * v1) < 0x20 )
    v2 = (unsigned __int8 *)&unk_60B3B9BC + 2 * v1;
  return *v2;
}
