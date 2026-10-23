/* SE_SYS_CB_RESULT_ref_2
 * address: 0x6052BA64   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CB_RESULT_ref_2(int a1)
{
  int v2; // r7
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int result; // r0

  v2 = 0;
  v3 = a1 + 60;
  do
  {
    if ( SE_SYS_CB_RESULT_ref_2_helper(v3 + v2) )
      sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_RESULT_COIN", 0, 1);
    v2 += 48;
  }
  while ( v2 != 2880 );
  if ( SE_SYS_CB_RESULT_ref_2_helper(a1 + 2940) )
  {
    v4 = 1;
    sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_RESULT_STARCOIN", 0, 1);
  }
  else
  {
    v4 = 0;
  }
  v5 = SE_SYS_CB_RESULT_ref_2_helper(a1 + 2988);
  if ( !v4 && v5 )
  {
    v4 = 1;
    sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_RESULT_STARCOIN", 0, 1);
  }
  result = SE_SYS_CB_RESULT_ref_2_helper(a1 + 3036);
  if ( !v4 )
  {
    if ( result )
      return sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_RESULT_STARCOIN", 0, 1);
  }
  return result;
}
