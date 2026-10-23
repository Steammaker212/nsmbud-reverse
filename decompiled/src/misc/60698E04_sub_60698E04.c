/* sub_60698E04
 * address: 0x60698E04   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60698E04(int a1)
{
  unsigned __int8 v2; // r6
  char v3; // r0
  char *v4; // r5
  int v5; // r0
  int v6; // r1
  bool v7; // nf
  bool v8; // vf
  bool v9; // cc
  unsigned int *v10; // r5
  int result; // r0

  v2 = 0;
  v4 = (char *)(a1 + 6140);
  v3 = FIELD_U8(a1, 6140);
  if ( (v3 & 1) != 0 )
  {
    v5 = sub_60585638(dword_60CAF15C, FIELD_U32(a1, 6136));
    v6 = FIELD_U32(a1, 6120);
    v8 = __OFSUB__(v5, v6);
    v7 = v5 - v6 < 0;
    v3 = *v4;
    v2 = v7 == v8;
  }
  if ( (v3 & 2) != 0 )
  {
    v9 = sub_60585654(dword_60CAF15C, FIELD_U32(a1, 6136)) < FIELD_U32(a1, 6124);
    v3 = *v4;
    if ( !v9 )
      v2 |= 2u;
  }
  if ( (v3 & 4) != 0 && sub_60585670(dword_60CAF15C, FIELD_U32(a1, 6136)) >= FIELD_U32(a1, 6128) )
    v2 |= 4u;
  sub_60699180(a1);
  if ( (unsigned __int8)*v4 == v2 )
  {
    v10 = (unsigned int *)(a1 + 6136);
    if ( sub_60585600(dword_60CAF15C, FIELD_U32(a1, 6136)) != 1 || sub_6058561C(dword_60CAF15C, *v10) )
    {
      if ( (FIELD_U8(a1, 20) & 0xF0) != 0 )
        nullsub_4();
      else
        SE_SYS_NICE_S_ref();
    }
    sub_603FD768(
      dword_60C99DF4,
      FIELD_U8(LevelInfo_instance, 18),
      1,
      FIELD_F32(a1, 108),
      FIELD_F32(a1, 112));
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB94A8);
  }
  else
  {
    v10 = (unsigned int *)(a1 + 6136);
  }
  FIELD_U32(a1, 6108) = sub_60585638(dword_60CAF15C, *v10);
  FIELD_U32(a1, 6112) = sub_60585654(dword_60CAF15C, *v10);
  result = sub_60585670(dword_60CAF15C, *v10);
  FIELD_U32(a1, 6116) = result;
  return result;
}
