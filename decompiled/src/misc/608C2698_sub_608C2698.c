/* sub_608C2698
 * address: 0x608C2698   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C2698(int a1, int a2)
{
  char v4; // lr
  _DWORD *v5; // r1
  int v6; // r0
  _DWORD *v7; // r2
  unsigned int *v8; // r9
  int v9; // r11
  int v10; // r10
  void (*v11)(void); // r0
  void (*v12)(void); // r0
  int v13; // r0
  _DWORD *v14; // r3
  int v15; // r1
  _DWORD *v16; // r2
  unsigned int v17; // r1
  void (*v18)(void); // r0
  _DWORD *v19; // r1
  int v20; // r0
  _DWORD *v21; // r2
  unsigned int v22; // r2
  unsigned int v23; // r1
  int result; // r0
  unsigned int v25; // r2
  unsigned int v26; // r0
  unsigned int v27; // r0
  int v28; // [sp+0h] [bp-30h]
  unsigned int v29; // [sp+4h] [bp-2Ch]
  _DWORD v30[10]; // [sp+8h] [bp-28h] BYREF

  if ( FIELD_U8(a1, 412) )
    goto LABEL_2;
  v25 = a2 + 3;
  v30[0] = FIELD_U32(a1, 408);
  v26 = FIELD_U32(a1, 404);
  v23 = v26 + ((unsigned int)(a2 + 3) >> 2);
  if ( v30[0] <= v26 )
  {
    if ( v23 > FIELD_U32(a1, 400) )
    {
      v23 = v25 >> 2;
      if ( v25 >> 2 > v30[0] )
        goto LABEL_2;
      result = FIELD_U32(a1, 396);
      goto LABEL_53;
    }
  }
  else if ( v23 > v30[0] )
  {
    goto LABEL_2;
  }
  result = FIELD_U32(a1, 396) + 4 * v26;
LABEL_53:
  FIELD_U32(a1, 404) = v23;
  if ( result )
    goto LABEL_40;
LABEL_2:
  if ( nn__os__TryReceiveMessageQueue(v30, a1 + 192) == 1 )
  {
    do
    {
      v5 = (_DWORD *)v30[0];
      FIELD_U32(a1, 392) = *(_DWORD *)(v30[0] + 8);
      v6 = FIELD_U32(a1, 416) - 1;
      do
      {
        FIELD_U32(a1, 416) = v6;
        v7 = v5;
        --v6;
        v5 = (_DWORD *)*v5;
      }
      while ( v5 );
      FIELD_U32(a1, 408) = v7[3];
      FIELD_U8(a1, 412) = 0;
    }
    while ( nn__os__TryReceiveMessageQueue(v30, a1 + 192) );
  }
  if ( FIELD_U8(a1, 412) )
  {
    v8 = (unsigned int *)(a1 + 404);
    v29 = (unsigned int)(a2 + 3) >> 2;
LABEL_8:
    v28 = a1 + 12;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = FIELD_U32(a1, 376);
        if ( v9 )
        {
          v10 = FIELD_U32(a1, 388);
          while ( (a1 + 384) | ((((a1 + 384) | (1619797864 << v4)) + 1) << v4) )
            ;
          if ( !nn__os__TrySendMessageQueue(v28, FIELD_U32(a1, 376)) )
          {
            v11 = *(void (**)(void))(a1 + 8);
            if ( v11 )
              v11();
            nn__os__SendMessageQueue(v28, v9);
          }
          *(_DWORD *)(FIELD_U32(a1, 376) + 8) = v10;
          ++FIELD_U32(a1, 388);
          FIELD_U32(a1, 376) = 0;
          FIELD_U32(a1, 380) = 0;
          do
          {
            if ( !nn__os__TryReceiveMessageQueue(v30, a1 + 192) )
            {
              v12 = *(void (**)(void))(a1 + 8);
              if ( v12 )
                v12();
              nn__os__ReceiveMessageQueue(v30, a1 + 192);
            }
            v13 = v30[0];
            v14 = (_DWORD *)v30[0];
            FIELD_U32(a1, 392) = *(_DWORD *)(v30[0] + 8);
            v15 = FIELD_U32(a1, 416) - 1;
            do
            {
              FIELD_U32(a1, 416) = v15;
              v16 = v14;
              --v15;
              v14 = (_DWORD *)*v14;
            }
            while ( v14 );
            v17 = v16[3];
            FIELD_U32(a1, 408) = v17;
            FIELD_U8(a1, 412) = 0;
          }
          while ( FIELD_U32(v13, 8) != v10 );
        }
        else
        {
          if ( !nn__os__TryReceiveMessageQueue(v30, a1 + 192) )
          {
            v18 = *(void (**)(void))(a1 + 8);
            if ( v18 )
              v18();
            nn__os__ReceiveMessageQueue(v30, a1 + 192);
          }
          v19 = (_DWORD *)v30[0];
          FIELD_U32(a1, 392) = *(_DWORD *)(v30[0] + 8);
          v20 = FIELD_U32(a1, 416) - 1;
          do
          {
            FIELD_U32(a1, 416) = v20;
            v21 = v19;
            --v20;
            v19 = (_DWORD *)*v19;
          }
          while ( v19 );
          v17 = v21[3];
          FIELD_U32(a1, 408) = v17;
          FIELD_U8(a1, 412) = 0;
        }
        v30[0] = v17;
        v22 = v17;
        v23 = *v8 + v29;
        if ( v22 <= *v8 )
          break;
        if ( v23 <= v30[0] )
          goto LABEL_38;
      }
      if ( v23 <= FIELD_U32(a1, 400) )
      {
LABEL_38:
        result = FIELD_U32(a1, 396) + 4 * *v8;
        goto LABEL_39;
      }
      if ( v29 <= v30[0] )
      {
        result = FIELD_U32(a1, 396);
        v23 = v29;
LABEL_39:
        *v8 = v23;
        if ( result )
          goto LABEL_40;
      }
    }
  }
  v30[0] = FIELD_U32(a1, 408);
  v8 = (unsigned int *)(a1 + 404);
  v27 = FIELD_U32(a1, 404);
  v23 = v27 + ((unsigned int)(a2 + 3) >> 2);
  v29 = (unsigned int)(a2 + 3) >> 2;
  if ( v30[0] <= v27 )
  {
    if ( v23 > FIELD_U32(a1, 400) )
    {
      if ( v29 > v30[0] )
        goto LABEL_8;
      result = FIELD_U32(a1, 396);
      v23 = (unsigned int)(a2 + 3) >> 2;
      goto LABEL_59;
    }
  }
  else if ( v23 > v30[0] )
  {
    goto LABEL_8;
  }
  result = FIELD_U32(a1, 396) + 4 * v27;
LABEL_59:
  *v8 = v23;
  if ( !result )
    goto LABEL_8;
LABEL_40:
  if ( v23 == v30[0] )
    FIELD_U8(a1, 412) = 1;
  FIELD_U32(result, 12) = v23;
  ++FIELD_U32(a1, 416);
  return result;
}
