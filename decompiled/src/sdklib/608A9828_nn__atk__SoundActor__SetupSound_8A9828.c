/* nn__atk__SoundActor__SetupSound_8A9828
 * address: 0x608A9828   size: 72   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall nn__atk__SoundActor__SetupSound_8A9828(
        int a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 *a6)
{
  if ( FIELD_U8(a1, 116) )
    return sub_608AB194(FIELD_U32(a1, 4), a2, a3, 0, a1, *a6, a4, a5);
  else
    return 17;
}
