/* sub_608175F8
 * address: 0x608175F8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608175F8(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  result = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  if ( FIELD_U32(a1, 20) == 17 )
  {
    v3 = result + 8;
    v4 = sub_608AB144(result + 8, 67108868);
    sub_608AC9B4(v4, 1, 10);
    v5 = sub_608AB144(v3, 67108870);
    sub_608AC9B4(v5, 1, 10);
    v6 = sub_608AB144(v3, 67108873);
    sub_608AC9B4(v6, 1, 10);
    v7 = sub_608AB144(v3, 67108869);
    return sub_608AC9B4(v7, 1, 10);
  }
  return result;
}
