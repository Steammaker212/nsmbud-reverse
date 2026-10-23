/* sub_6054EACC
 * address: 0x6054EACC   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054EACC(int a1)
{
  int v2; // r6
  int v3; // r7
  unsigned int v4; // r0
  int result; // r0
  _DWORD *v6; // r4
  int v7; // r3
  int v8; // r6
  float v9; // s16
  char *v10; // r5
  signed int i; // r6
  const char *v12; // r1
  int (**v13)(); // [sp+4h] [bp-34h] BYREF
  char *v14; // [sp+8h] [bp-30h]
  int v15; // [sp+Ch] [bp-2Ch]
  int v16; // [sp+10h] [bp-28h] BYREF

  if ( !FIELD_U8(a1, 3822) )
  {
    result = FIELD_U32(a1, 3716);
    if ( result < 0 )
      return result;
    v6 = (_DWORD *)(a1 + 40);
    v7 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v7 = dword_60C99DEC + 16;
    if ( (unsigned int)result >= 6 )
      result = 0;
    v8 = *(_DWORD *)(v7 + 72 * result + 36);
    sub_60473DE4(v6, 0, &dword_60CACBCC, 0);
    v9 = 0.0;
    switch ( v8 )
    {
      case 1:
        v9 = 1.0;
        goto LABEL_42;
      case 2:
        v9 = 2.0;
        goto LABEL_42;
      case 3:
        v9 = 3.0;
        goto LABEL_42;
      case 4:
        v9 = 4.0;
        goto LABEL_42;
      case 5:
        v9 = 5.0;
        goto LABEL_42;
      case 6:
      case 7:
        v14 = (char *)&v16;
        v13 = &BufferedSafeStringBase_char_vtable_probably;
        v15 = 8;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v13);
        *v14 = 0;
        v13 = &off_60BD4B8C;
        v10 = v14;
        if ( v8 == 6 )
        {
          if ( v14 != "Gray" )
          {
            for ( i = 0; aGray[i]; i += 2 )
            {
              if ( i > 0x7FFFF )
              {
                i = 0;
                break;
              }
              if ( !aGray[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= v15 )
              i = v15 - 1;
            v12 = "Gray";
LABEL_41:
            qmemcpy(v14, v12, i);
            v10[i] = 0;
          }
        }
        else if ( v14 != "Max" )
        {
          for ( i = 0; aMax[i]; i += 2 )
          {
            if ( i > 0x7FFFF )
            {
              i = 0;
              break;
            }
            if ( !aMax[i + 1] )
            {
              ++i;
              break;
            }
          }
          if ( i >= v15 )
            i = v15 - 1;
          v12 = "Max";
          goto LABEL_41;
        }
LABEL_42:
        sub_6047455C((int)v6, 0, v9);
        sub_6047459C((int)v6, 0);
        return sub_60473B58(v6, 0xEu, 0);
      default:
        goto LABEL_42;
    }
  }
  v2 = 0;
  v3 = a1 + 3648;
  v13 = (int (**)())-1;
  v4 = FIELD_U32(a1, 3812);
  if ( v4 >= 8 )
    v4 = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, int (***)()))(**(_DWORD **)(v3 + 4 * v4) + 20))(
    *(_DWORD *)(v3 + 4 * v4),
    0,
    &v13);
  if ( FIELD_U32(a1, 3812) < 8u )
    v2 = FIELD_U32(a1, 3812);
  return (*(int (__fastcall **)(_DWORD, int, int (***)()))(**(_DWORD **)(v3 + 4 * v2) + 20))(
           *(_DWORD *)(v3 + 4 * v2),
           2,
           &v13);
}
