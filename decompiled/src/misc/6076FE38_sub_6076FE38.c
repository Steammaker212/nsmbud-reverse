/* sub_6076FE38
 * address: 0x6076FE38   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6076FE38(int a1)
{
  int v1; // r1
  int v3; // r0
  int *v4; // r1

  v1 = FIELD_U32(a1, 6904);
  if ( (v1 & 0x18) == 0 )
    return (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1) + 3.628;
  if ( FIELD_F32(a1, 112) >= (float)(FIELD_F32(a1, 7044) + -7.0) )
    return 3.5;
  v3 = FIELD_U32(a1, 1320);
  if ( (v1 & 0x10) != 0 )
    v4 = dword_6076FEB4;
  else
    v4 = dword_6076FEBC;
  if ( v3 == 3 )
    ++v4;
  return *(float *)v4;
}
