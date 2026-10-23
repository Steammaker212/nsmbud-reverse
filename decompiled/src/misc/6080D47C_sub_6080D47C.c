/* sub_6080D47C
 * address: 0x6080D47C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080D47C(float a1)
{
  float v1; // s1
  float v2; // s2
  float v3; // s3
  float v4; // s4
  float v5; // s16
  int v6; // r4
  int v7; // r0
  int v8; // r0

  if ( a1 >= 0.5 )
  {
    v2 = 1.0;
    v3 = 0.0;
    v1 = 0.5;
    v4 = 1.0;
  }
  else
  {
    v1 = 0.0;
    v2 = 0.5;
    v3 = 1.0;
    v4 = 0.0;
  }
  v5 = sub_6080E4E0(a1, v1, v2, v3, v4);
  if ( v5 >= 0.0 )
  {
    if ( v5 > 1.0 )
      v5 = 1.0;
  }
  else
  {
    v5 = 0.0;
  }
  v6 = SoundSystem_getSoundArchivePlayer(SoundSystem_instance) + 8;
  v7 = sub_608AB144(v6, 67108867);
  sub_608AC9F4(v7, v5);
  v8 = sub_608AB144(v6, 67108884);
  return sub_608AC9F4(v8, v5);
}
