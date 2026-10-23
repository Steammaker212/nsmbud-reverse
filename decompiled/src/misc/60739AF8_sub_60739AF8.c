/* sub_60739AF8
 * address: 0x60739AF8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60739AF8(int a1)
{
  int result; // r0
  _BYTE *v3; // r8
  _BYTE *v4; // r7
  unsigned __int8 v5; // r5
  unsigned __int8 v6; // r6
  int v7; // r0
  int v8; // r0
  _WORD *v9; // r4
  int v10; // t1

  v3 = (_BYTE *)(a1 + 6102);
  result = FIELD_U8(a1, 6102);
  if ( result == 2 )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDFC4);
  if ( result == 1 )
  {
    v10 = FIELD_U16(a1, 6100);
    v9 = (_WORD *)(a1 + 6100);
    v8 = v10;
    if ( v10 )
    {
      result = v8 - 1;
      *v9 = result;
      return result;
    }
    result = 2;
    goto LABEL_16;
  }
  if ( result )
    return result;
  v4 = (_BYTE *)(a1 + 6108);
  if ( !FIELD_U8(a1, 6108) )
  {
LABEL_11:
    result = (unsigned __int8)*v3 + 1;
LABEL_16:
    *v3 = result;
    return result;
  }
  v5 = 0;
  while ( 1 )
  {
    result = *(unsigned __int8 *)(*(_DWORD *)(sub_6073AFA4(a1, v5) + 7396) + 6768);
    if ( !result )
      return result;
    if ( ++v5 >= (unsigned int)(unsigned __int8)*v4 )
    {
      if ( *v4 )
      {
        v6 = 0;
        do
        {
          v7 = sub_6073AFA4(a1, v6);
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60CBDEC0);
          ++v6;
        }
        while ( v6 < (unsigned int)(unsigned __int8)*v4 );
      }
      goto LABEL_11;
    }
  }
}
