/* nn__atk__SoundActor__detail_SetupSoundWithAmbientInfo
 * address: 0x608A9870   size: 76   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall nn__atk__SoundActor__detail_SetupSoundWithAmbientInfo(
        int a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int8 *a7)
{
  if ( FIELD_U8(a1, 116) )
    return sub_608AB194(FIELD_U32(a1, 4), a2, a3, a6, a1, *a7, a4, a5);
  else
    return 17;
}
