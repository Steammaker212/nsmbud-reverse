/* sub_6042A8AC
 * address: 0x6042A8AC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042A8AC(int a1, unsigned int a2)
{
  unsigned int v2; // r1
  int v3; // r0
  _DWORD *v4; // r5
  int v5; // r7
  int v6; // r6
  unsigned int i; // r8
  _DWORD *v8; // r11
  int v9; // r5
  int v10; // r0
  void *v11; // r0
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r9
  int v15; // r0
  int v16; // r0
  int result; // r0
  _DWORD *v18; // [sp+0h] [bp-38h]
  int *v20; // [sp+8h] [bp-30h]

  v2 = 0;
  if ( a2 < 6 )
    v2 = a2;
  v18 = (_DWORD *)(a1 + 56 * v2);
  v3 = v18[183];
  v4 = v18 + 184;
  v20 = v18 + 183;
  if ( v3 >= 1 )
  {
    v5 = v3 - 1;
    v6 = 0;
    for ( i = 0; ; ++i )
    {
      v8 = v4;
      v9 = *v4;
      if ( v3 > i )
        v9 += v6;
      v10 = FIELD_U32(v9, 4);
      if ( v10 )
      {
        v11 = (void *)sub_604201A4(v10);
        operator_delete(v11);
        FIELD_U32(v9, 4) = 0;
      }
      v12 = a2;
      if ( a2 >= 6 )
        v12 = 0;
      v13 = a1 + 56 * v12;
      v14 = FIELD_U32(v13, 736);
      if ( FIELD_U32(v13, 732) > i )
        v14 += v6;
      v15 = FIELD_U32(v14, 12);
      if ( v15 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 16))(v15);
        FIELD_U32(v14, 12) = 0;
      }
      v16 = FIELD_U32(v14, 8);
      v4 = v8;
      if ( v16 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 16))(v16);
        FIELD_U32(v14, 8) = 0;
      }
      if ( v5 == i )
        break;
      v6 += 72;
      v3 = *v20;
    }
  }
  if ( *v4 )
  {
    operator_delete_8DE3FC((void *)(*v4 - 8));
    *v4 = 0;
    *v20 = 0;
  }
  result = v18[182];
  if ( result )
  {
    v18[182] = 0;
    return 0;
  }
  return result;
}
