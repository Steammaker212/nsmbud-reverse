/* sub_602961D0
 * address: 0x602961D0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602961D0(Actor *a1)
{
  char *v2; // r6
  int v3; // r5
  float v4; // s0
  int v5; // r5
  int ProfileId; // r0
  int v7; // r2
  bool v8; // zf
  int result; // r0

  v2 = &a1[76].field_10;
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)&a1[76].field_10 + 8))(*(_DWORD *)&a1[76].field_10);
  if ( v3 == (*(int (**)(void))(dword_60C8FE0C + 8))() )
  {
    v4 = 1.3;
  }
  else
  {
    v5 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)v2 + 8))(*(_DWORD *)v2);
    if ( v5 == (*(int (**)(void))(dword_60C8FE2C + 8))() )
      (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 788))(a1);
    else
      v4 = 1.0;
  }
  *(float *)&a1[85].field_34 = v4;
  ProfileId = Actor__getProfileId(a1);
  v7 = 32;
  v8 = ProfileId == 491;
  result = 6664;
  if ( v8 )
    v7 = 64;
  a1[83].settigns2 = v7;
  return result;
}
