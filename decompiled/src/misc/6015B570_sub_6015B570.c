/* sub_6015B570
 * address: 0x6015B570   size: 912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6015B570(_DWORD *a1)
{
  int *result; // r0
  int i; // r4
  ActiveCollider *v3; // r5
  int v4; // r6
  StageActor *owner; // r0
  int v6; // r2
  int **v7; // r11
  int v8; // r1
  _DWORD *v9; // r3
  _DWORD *v10; // r6
  int *v11; // r2
  int v12; // r3
  int v13; // r6
  int *v14; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r5
  int v20; // r9
  int v21; // r0
  int v22; // r2

  sub_6015AF40(a1);
  result = (int *)dword_60C995D0;
  if ( dword_60C995D0 )
  {
    result = *(int **)(dword_60C995D0 + 32);
    if ( !result )
    {
      for ( i = a1[5]; i; i = FIELD_U32(i, 4) )
      {
        v3 = *(ActiveCollider **)i;
        ActiveCollider_reset(*(ActiveCollider **)i);
        v4 = FIELD_U32(i, 4);
        if ( !v4 )
          break;
        do
        {
          owner = FIELD_U32(v3, 0x40);
          if ( FIELD_U8(owner, 0x216) )
          {
            v6 = *(_DWORD *)(*(_DWORD *)v4 + 64);
            if ( FIELD_U8(v6, 534) )
            {
              if ( !FIELD_U8(owner, 0x13) && !FIELD_U8(v6, 19) )
                ActiveCollider_doOverlapMaybe(v3, *(ActiveCollider **)v4);
            }
          }
          v4 = FIELD_U32(v4, 4);
        }
        while ( v4 );
      }
      v7 = (int **)(a1 + 8);
      result = (int *)a1[8];
      if ( result )
      {
        do
        {
          dword_60C88238 = 0;
          v8 = 0;
          do
          {
            v11 = (int *)*result;
            result = (int *)result[1];
            if ( v8 < dword_60C8823C )
            {
              *(_DWORD *)(dword_60C88240 + 4 * v8) = v11;
              v8 = ++dword_60C88238;
            }
            v12 = v11[8];
            v13 = v11[9];
            v14 = v11 + 7;
            if ( v12 )
            {
              if ( v13 )
                goto LABEL_27;
              v10 = a1 + 8;
              if ( *v7 != v14 )
                goto LABEL_29;
            }
            else
            {
              if ( v13 )
              {
LABEL_27:
                v10 = (_DWORD *)(v13 + 4);
                goto LABEL_28;
              }
              v10 = a1 + 8;
              if ( *v7 != v14 )
                continue;
            }
LABEL_28:
            *v10 = v12;
            v12 = v11[8];
            if ( v12 )
            {
LABEL_29:
              v9 = (_DWORD *)(v12 + 8);
LABEL_30:
              *v9 = v11[9];
              goto LABEL_31;
            }
            v9 = a1 + 9;
            if ( (int *)a1[9] == v14 )
              goto LABEL_30;
LABEL_31:
            v11[8] = 0;
            v11[9] = 0;
          }
          while ( result );
          if ( v8 >= 1 )
          {
            do
            {
              v19 = *(_DWORD *)dword_60C88240;
              memmove((void *)dword_60C88240, (const void *)(dword_60C88240 + 4), 4 * v8 - 4);
              --dword_60C88238;
              if ( !v19 )
                break;
              if ( FIELD_U32(v19, 136) != 12 )
              {
                v20 = a1[5];
                if ( !v20 )
                  goto LABEL_46;
                do
                {
                  v21 = FIELD_U32(v19, 64);
                  if ( FIELD_U8(v21, 534) )
                  {
                    v22 = *(_DWORD *)(*(_DWORD *)v20 + 64);
                    if ( FIELD_U8(v22, 534) )
                    {
                      if ( !FIELD_U8(v21, 19) && !FIELD_U8(v22, 19) )
                        ActiveCollider_doOverlapMaybe((ActiveCollider *)v19, *(ActiveCollider **)v20);
                    }
                  }
                  v20 = FIELD_U32(v20, 4);
                }
                while ( v20 );
                if ( FIELD_U32(v19, 136) != 12 )
                {
LABEL_46:
                  if ( !FIELD_U32(v19, 20) && !FIELD_U32(v19, 24) )
                  {
                    v17 = v19 + 16;
                    if ( a1[5] != v19 + 16
                      && ((FIELD_U8(v19, 145) & 8) == 0
                       || !FIELD_U32(v19, 56) && !FIELD_U32(v19, 60) && a1[14] != v19 + 52) )
                    {
                      v18 = a1[6];
                      if ( v18 )
                      {
                        FIELD_U32(v18, 4) = v17;
                        FIELD_U32(v19, 24) = a1[6];
                      }
                      else
                      {
                        a1[5] = v17;
                      }
                      a1[6] = v17;
                    }
                  }
                }
              }
              if ( (FIELD_U8(v19, 145) & 8) != 0 && !FIELD_U32(v19, 56) && !FIELD_U32(v19, 60) )
              {
                v15 = v19 + 52;
                if ( a1[14] != v19 + 52 )
                {
                  v16 = a1[15];
                  if ( v16 )
                  {
                    FIELD_U32(v16, 4) = v15;
                    FIELD_U32(v19, 60) = a1[15];
                  }
                  else
                  {
                    a1[14] = v15;
                  }
                  a1[15] = v15;
                }
              }
              v8 = dword_60C88238;
            }
            while ( dword_60C88238 > 0 );
          }
          result = *v7;
        }
        while ( *v7 );
      }
    }
  }
  return result;
}
