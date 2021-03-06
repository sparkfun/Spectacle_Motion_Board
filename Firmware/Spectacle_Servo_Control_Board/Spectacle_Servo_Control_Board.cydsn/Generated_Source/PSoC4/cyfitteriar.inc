#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* LED */
LED__0__DR EQU CYREG_GPIO_PRT2_DR
LED__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
LED__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
LED__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
LED__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LED__0__HSIOM_MASK EQU 0xF0000000
LED__0__HSIOM_SHIFT EQU 28
LED__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
LED__0__INTR EQU CYREG_GPIO_PRT2_INTR
LED__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
LED__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
LED__0__MASK EQU 0x80
LED__0__PC EQU CYREG_GPIO_PRT2_PC
LED__0__PC2 EQU CYREG_GPIO_PRT2_PC2
LED__0__PORT EQU 2
LED__0__PS EQU CYREG_GPIO_PRT2_PS
LED__0__SHIFT EQU 7
LED__DR EQU CYREG_GPIO_PRT2_DR
LED__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
LED__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
LED__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
LED__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
LED__INTR EQU CYREG_GPIO_PRT2_INTR
LED__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
LED__INTSTAT EQU CYREG_GPIO_PRT2_INTR
LED__MASK EQU 0x80
LED__PC EQU CYREG_GPIO_PRT2_PC
LED__PC2 EQU CYREG_GPIO_PRT2_PC2
LED__PORT EQU 2
LED__PS EQU CYREG_GPIO_PRT2_PS
LED__SHIFT EQU 7

/* UART_rx */
UART_rx__0__DR EQU CYREG_GPIO_PRT0_DR
UART_rx__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
UART_rx__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
UART_rx__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
UART_rx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
UART_rx__0__HSIOM_GPIO EQU 0
UART_rx__0__HSIOM_I2C EQU 14
UART_rx__0__HSIOM_I2C_SCL EQU 14
UART_rx__0__HSIOM_MASK EQU 0x000F0000
UART_rx__0__HSIOM_SHIFT EQU 16
UART_rx__0__HSIOM_SPI EQU 15
UART_rx__0__HSIOM_SPI_MOSI EQU 15
UART_rx__0__HSIOM_UART EQU 9
UART_rx__0__HSIOM_UART_RX EQU 9
UART_rx__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
UART_rx__0__INTR EQU CYREG_GPIO_PRT0_INTR
UART_rx__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
UART_rx__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
UART_rx__0__MASK EQU 0x10
UART_rx__0__PC EQU CYREG_GPIO_PRT0_PC
UART_rx__0__PC2 EQU CYREG_GPIO_PRT0_PC2
UART_rx__0__PORT EQU 0
UART_rx__0__PS EQU CYREG_GPIO_PRT0_PS
UART_rx__0__SHIFT EQU 4
UART_rx__DR EQU CYREG_GPIO_PRT0_DR
UART_rx__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
UART_rx__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
UART_rx__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
UART_rx__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
UART_rx__INTR EQU CYREG_GPIO_PRT0_INTR
UART_rx__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
UART_rx__INTSTAT EQU CYREG_GPIO_PRT0_INTR
UART_rx__MASK EQU 0x10
UART_rx__PC EQU CYREG_GPIO_PRT0_PC
UART_rx__PC2 EQU CYREG_GPIO_PRT0_PC2
UART_rx__PORT EQU 0
UART_rx__PS EQU CYREG_GPIO_PRT0_PS
UART_rx__SHIFT EQU 4

/* UART_SCB */
UART_SCB__CTRL EQU CYREG_SCB1_CTRL
UART_SCB__EZ_DATA0 EQU CYREG_SCB1_EZ_DATA0
UART_SCB__EZ_DATA1 EQU CYREG_SCB1_EZ_DATA1
UART_SCB__EZ_DATA10 EQU CYREG_SCB1_EZ_DATA10
UART_SCB__EZ_DATA11 EQU CYREG_SCB1_EZ_DATA11
UART_SCB__EZ_DATA12 EQU CYREG_SCB1_EZ_DATA12
UART_SCB__EZ_DATA13 EQU CYREG_SCB1_EZ_DATA13
UART_SCB__EZ_DATA14 EQU CYREG_SCB1_EZ_DATA14
UART_SCB__EZ_DATA15 EQU CYREG_SCB1_EZ_DATA15
UART_SCB__EZ_DATA16 EQU CYREG_SCB1_EZ_DATA16
UART_SCB__EZ_DATA17 EQU CYREG_SCB1_EZ_DATA17
UART_SCB__EZ_DATA18 EQU CYREG_SCB1_EZ_DATA18
UART_SCB__EZ_DATA19 EQU CYREG_SCB1_EZ_DATA19
UART_SCB__EZ_DATA2 EQU CYREG_SCB1_EZ_DATA2
UART_SCB__EZ_DATA20 EQU CYREG_SCB1_EZ_DATA20
UART_SCB__EZ_DATA21 EQU CYREG_SCB1_EZ_DATA21
UART_SCB__EZ_DATA22 EQU CYREG_SCB1_EZ_DATA22
UART_SCB__EZ_DATA23 EQU CYREG_SCB1_EZ_DATA23
UART_SCB__EZ_DATA24 EQU CYREG_SCB1_EZ_DATA24
UART_SCB__EZ_DATA25 EQU CYREG_SCB1_EZ_DATA25
UART_SCB__EZ_DATA26 EQU CYREG_SCB1_EZ_DATA26
UART_SCB__EZ_DATA27 EQU CYREG_SCB1_EZ_DATA27
UART_SCB__EZ_DATA28 EQU CYREG_SCB1_EZ_DATA28
UART_SCB__EZ_DATA29 EQU CYREG_SCB1_EZ_DATA29
UART_SCB__EZ_DATA3 EQU CYREG_SCB1_EZ_DATA3
UART_SCB__EZ_DATA30 EQU CYREG_SCB1_EZ_DATA30
UART_SCB__EZ_DATA31 EQU CYREG_SCB1_EZ_DATA31
UART_SCB__EZ_DATA4 EQU CYREG_SCB1_EZ_DATA4
UART_SCB__EZ_DATA5 EQU CYREG_SCB1_EZ_DATA5
UART_SCB__EZ_DATA6 EQU CYREG_SCB1_EZ_DATA6
UART_SCB__EZ_DATA7 EQU CYREG_SCB1_EZ_DATA7
UART_SCB__EZ_DATA8 EQU CYREG_SCB1_EZ_DATA8
UART_SCB__EZ_DATA9 EQU CYREG_SCB1_EZ_DATA9
UART_SCB__I2C_CFG EQU CYREG_SCB1_I2C_CFG
UART_SCB__I2C_CTRL EQU CYREG_SCB1_I2C_CTRL
UART_SCB__I2C_M_CMD EQU CYREG_SCB1_I2C_M_CMD
UART_SCB__I2C_S_CMD EQU CYREG_SCB1_I2C_S_CMD
UART_SCB__I2C_STATUS EQU CYREG_SCB1_I2C_STATUS
UART_SCB__INTR_CAUSE EQU CYREG_SCB1_INTR_CAUSE
UART_SCB__INTR_I2C_EC EQU CYREG_SCB1_INTR_I2C_EC
UART_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB1_INTR_I2C_EC_MASK
UART_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB1_INTR_I2C_EC_MASKED
UART_SCB__INTR_M EQU CYREG_SCB1_INTR_M
UART_SCB__INTR_M_MASK EQU CYREG_SCB1_INTR_M_MASK
UART_SCB__INTR_M_MASKED EQU CYREG_SCB1_INTR_M_MASKED
UART_SCB__INTR_M_SET EQU CYREG_SCB1_INTR_M_SET
UART_SCB__INTR_RX EQU CYREG_SCB1_INTR_RX
UART_SCB__INTR_RX_MASK EQU CYREG_SCB1_INTR_RX_MASK
UART_SCB__INTR_RX_MASKED EQU CYREG_SCB1_INTR_RX_MASKED
UART_SCB__INTR_RX_SET EQU CYREG_SCB1_INTR_RX_SET
UART_SCB__INTR_S EQU CYREG_SCB1_INTR_S
UART_SCB__INTR_S_MASK EQU CYREG_SCB1_INTR_S_MASK
UART_SCB__INTR_S_MASKED EQU CYREG_SCB1_INTR_S_MASKED
UART_SCB__INTR_S_SET EQU CYREG_SCB1_INTR_S_SET
UART_SCB__INTR_SPI_EC EQU CYREG_SCB1_INTR_SPI_EC
UART_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB1_INTR_SPI_EC_MASK
UART_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB1_INTR_SPI_EC_MASKED
UART_SCB__INTR_TX EQU CYREG_SCB1_INTR_TX
UART_SCB__INTR_TX_MASK EQU CYREG_SCB1_INTR_TX_MASK
UART_SCB__INTR_TX_MASKED EQU CYREG_SCB1_INTR_TX_MASKED
UART_SCB__INTR_TX_SET EQU CYREG_SCB1_INTR_TX_SET
UART_SCB__RX_CTRL EQU CYREG_SCB1_RX_CTRL
UART_SCB__RX_FIFO_CTRL EQU CYREG_SCB1_RX_FIFO_CTRL
UART_SCB__RX_FIFO_RD EQU CYREG_SCB1_RX_FIFO_RD
UART_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB1_RX_FIFO_RD_SILENT
UART_SCB__RX_FIFO_STATUS EQU CYREG_SCB1_RX_FIFO_STATUS
UART_SCB__RX_MATCH EQU CYREG_SCB1_RX_MATCH
UART_SCB__SPI_CTRL EQU CYREG_SCB1_SPI_CTRL
UART_SCB__SPI_STATUS EQU CYREG_SCB1_SPI_STATUS
UART_SCB__SS0_POSISTION EQU 0
UART_SCB__SS1_POSISTION EQU 1
UART_SCB__SS2_POSISTION EQU 2
UART_SCB__SS3_POSISTION EQU 3
UART_SCB__STATUS EQU CYREG_SCB1_STATUS
UART_SCB__TX_CTRL EQU CYREG_SCB1_TX_CTRL
UART_SCB__TX_FIFO_CTRL EQU CYREG_SCB1_TX_FIFO_CTRL
UART_SCB__TX_FIFO_STATUS EQU CYREG_SCB1_TX_FIFO_STATUS
UART_SCB__TX_FIFO_WR EQU CYREG_SCB1_TX_FIFO_WR
UART_SCB__UART_CTRL EQU CYREG_SCB1_UART_CTRL
UART_SCB__UART_FLOW_CTRL EQU CYREG_SCB1_UART_FLOW_CTRL
UART_SCB__UART_RX_CTRL EQU CYREG_SCB1_UART_RX_CTRL
UART_SCB__UART_RX_STATUS EQU CYREG_SCB1_UART_RX_STATUS
UART_SCB__UART_TX_CTRL EQU CYREG_SCB1_UART_TX_CTRL

/* UART_SCBCLK */
UART_SCBCLK__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL1
UART_SCBCLK__DIV_ID EQU 0x00000042
UART_SCBCLK__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL2
UART_SCBCLK__PA_DIV_ID EQU 0x000000FF

/* UART_tx */
UART_tx__0__DR EQU CYREG_GPIO_PRT0_DR
UART_tx__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
UART_tx__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
UART_tx__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
UART_tx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
UART_tx__0__HSIOM_GPIO EQU 0
UART_tx__0__HSIOM_I2C EQU 14
UART_tx__0__HSIOM_I2C_SDA EQU 14
UART_tx__0__HSIOM_MASK EQU 0x00F00000
UART_tx__0__HSIOM_SHIFT EQU 20
UART_tx__0__HSIOM_SPI EQU 15
UART_tx__0__HSIOM_SPI_MISO EQU 15
UART_tx__0__HSIOM_UART EQU 9
UART_tx__0__HSIOM_UART_TX EQU 9
UART_tx__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
UART_tx__0__INTR EQU CYREG_GPIO_PRT0_INTR
UART_tx__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
UART_tx__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
UART_tx__0__MASK EQU 0x20
UART_tx__0__PC EQU CYREG_GPIO_PRT0_PC
UART_tx__0__PC2 EQU CYREG_GPIO_PRT0_PC2
UART_tx__0__PORT EQU 0
UART_tx__0__PS EQU CYREG_GPIO_PRT0_PS
UART_tx__0__SHIFT EQU 5
UART_tx__DR EQU CYREG_GPIO_PRT0_DR
UART_tx__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
UART_tx__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
UART_tx__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
UART_tx__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
UART_tx__INTR EQU CYREG_GPIO_PRT0_INTR
UART_tx__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
UART_tx__INTSTAT EQU CYREG_GPIO_PRT0_INTR
UART_tx__MASK EQU 0x20
UART_tx__PC EQU CYREG_GPIO_PRT0_PC
UART_tx__PC2 EQU CYREG_GPIO_PRT0_PC2
UART_tx__PORT EQU 0
UART_tx__PS EQU CYREG_GPIO_PRT0_PS
UART_tx__SHIFT EQU 5

/* EZI2C_SCB */
EZI2C_SCB__CTRL EQU CYREG_SCB2_CTRL
EZI2C_SCB__EZ_DATA0 EQU CYREG_SCB2_EZ_DATA0
EZI2C_SCB__EZ_DATA1 EQU CYREG_SCB2_EZ_DATA1
EZI2C_SCB__EZ_DATA10 EQU CYREG_SCB2_EZ_DATA10
EZI2C_SCB__EZ_DATA11 EQU CYREG_SCB2_EZ_DATA11
EZI2C_SCB__EZ_DATA12 EQU CYREG_SCB2_EZ_DATA12
EZI2C_SCB__EZ_DATA13 EQU CYREG_SCB2_EZ_DATA13
EZI2C_SCB__EZ_DATA14 EQU CYREG_SCB2_EZ_DATA14
EZI2C_SCB__EZ_DATA15 EQU CYREG_SCB2_EZ_DATA15
EZI2C_SCB__EZ_DATA16 EQU CYREG_SCB2_EZ_DATA16
EZI2C_SCB__EZ_DATA17 EQU CYREG_SCB2_EZ_DATA17
EZI2C_SCB__EZ_DATA18 EQU CYREG_SCB2_EZ_DATA18
EZI2C_SCB__EZ_DATA19 EQU CYREG_SCB2_EZ_DATA19
EZI2C_SCB__EZ_DATA2 EQU CYREG_SCB2_EZ_DATA2
EZI2C_SCB__EZ_DATA20 EQU CYREG_SCB2_EZ_DATA20
EZI2C_SCB__EZ_DATA21 EQU CYREG_SCB2_EZ_DATA21
EZI2C_SCB__EZ_DATA22 EQU CYREG_SCB2_EZ_DATA22
EZI2C_SCB__EZ_DATA23 EQU CYREG_SCB2_EZ_DATA23
EZI2C_SCB__EZ_DATA24 EQU CYREG_SCB2_EZ_DATA24
EZI2C_SCB__EZ_DATA25 EQU CYREG_SCB2_EZ_DATA25
EZI2C_SCB__EZ_DATA26 EQU CYREG_SCB2_EZ_DATA26
EZI2C_SCB__EZ_DATA27 EQU CYREG_SCB2_EZ_DATA27
EZI2C_SCB__EZ_DATA28 EQU CYREG_SCB2_EZ_DATA28
EZI2C_SCB__EZ_DATA29 EQU CYREG_SCB2_EZ_DATA29
EZI2C_SCB__EZ_DATA3 EQU CYREG_SCB2_EZ_DATA3
EZI2C_SCB__EZ_DATA30 EQU CYREG_SCB2_EZ_DATA30
EZI2C_SCB__EZ_DATA31 EQU CYREG_SCB2_EZ_DATA31
EZI2C_SCB__EZ_DATA4 EQU CYREG_SCB2_EZ_DATA4
EZI2C_SCB__EZ_DATA5 EQU CYREG_SCB2_EZ_DATA5
EZI2C_SCB__EZ_DATA6 EQU CYREG_SCB2_EZ_DATA6
EZI2C_SCB__EZ_DATA7 EQU CYREG_SCB2_EZ_DATA7
EZI2C_SCB__EZ_DATA8 EQU CYREG_SCB2_EZ_DATA8
EZI2C_SCB__EZ_DATA9 EQU CYREG_SCB2_EZ_DATA9
EZI2C_SCB__I2C_CFG EQU CYREG_SCB2_I2C_CFG
EZI2C_SCB__I2C_CTRL EQU CYREG_SCB2_I2C_CTRL
EZI2C_SCB__I2C_M_CMD EQU CYREG_SCB2_I2C_M_CMD
EZI2C_SCB__I2C_S_CMD EQU CYREG_SCB2_I2C_S_CMD
EZI2C_SCB__I2C_STATUS EQU CYREG_SCB2_I2C_STATUS
EZI2C_SCB__INTR_CAUSE EQU CYREG_SCB2_INTR_CAUSE
EZI2C_SCB__INTR_I2C_EC EQU CYREG_SCB2_INTR_I2C_EC
EZI2C_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB2_INTR_I2C_EC_MASK
EZI2C_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB2_INTR_I2C_EC_MASKED
EZI2C_SCB__INTR_M EQU CYREG_SCB2_INTR_M
EZI2C_SCB__INTR_M_MASK EQU CYREG_SCB2_INTR_M_MASK
EZI2C_SCB__INTR_M_MASKED EQU CYREG_SCB2_INTR_M_MASKED
EZI2C_SCB__INTR_M_SET EQU CYREG_SCB2_INTR_M_SET
EZI2C_SCB__INTR_RX EQU CYREG_SCB2_INTR_RX
EZI2C_SCB__INTR_RX_MASK EQU CYREG_SCB2_INTR_RX_MASK
EZI2C_SCB__INTR_RX_MASKED EQU CYREG_SCB2_INTR_RX_MASKED
EZI2C_SCB__INTR_RX_SET EQU CYREG_SCB2_INTR_RX_SET
EZI2C_SCB__INTR_S EQU CYREG_SCB2_INTR_S
EZI2C_SCB__INTR_S_MASK EQU CYREG_SCB2_INTR_S_MASK
EZI2C_SCB__INTR_S_MASKED EQU CYREG_SCB2_INTR_S_MASKED
EZI2C_SCB__INTR_S_SET EQU CYREG_SCB2_INTR_S_SET
EZI2C_SCB__INTR_SPI_EC EQU CYREG_SCB2_INTR_SPI_EC
EZI2C_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB2_INTR_SPI_EC_MASK
EZI2C_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB2_INTR_SPI_EC_MASKED
EZI2C_SCB__INTR_TX EQU CYREG_SCB2_INTR_TX
EZI2C_SCB__INTR_TX_MASK EQU CYREG_SCB2_INTR_TX_MASK
EZI2C_SCB__INTR_TX_MASKED EQU CYREG_SCB2_INTR_TX_MASKED
EZI2C_SCB__INTR_TX_SET EQU CYREG_SCB2_INTR_TX_SET
EZI2C_SCB__RX_CTRL EQU CYREG_SCB2_RX_CTRL
EZI2C_SCB__RX_FIFO_CTRL EQU CYREG_SCB2_RX_FIFO_CTRL
EZI2C_SCB__RX_FIFO_RD EQU CYREG_SCB2_RX_FIFO_RD
EZI2C_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB2_RX_FIFO_RD_SILENT
EZI2C_SCB__RX_FIFO_STATUS EQU CYREG_SCB2_RX_FIFO_STATUS
EZI2C_SCB__RX_MATCH EQU CYREG_SCB2_RX_MATCH
EZI2C_SCB__SPI_CTRL EQU CYREG_SCB2_SPI_CTRL
EZI2C_SCB__SPI_STATUS EQU CYREG_SCB2_SPI_STATUS
EZI2C_SCB__SS0_POSISTION EQU 0
EZI2C_SCB__SS1_POSISTION EQU 1
EZI2C_SCB__SS2_POSISTION EQU 2
EZI2C_SCB__SS3_POSISTION EQU 3
EZI2C_SCB__STATUS EQU CYREG_SCB2_STATUS
EZI2C_SCB__TX_CTRL EQU CYREG_SCB2_TX_CTRL
EZI2C_SCB__TX_FIFO_CTRL EQU CYREG_SCB2_TX_FIFO_CTRL
EZI2C_SCB__TX_FIFO_STATUS EQU CYREG_SCB2_TX_FIFO_STATUS
EZI2C_SCB__TX_FIFO_WR EQU CYREG_SCB2_TX_FIFO_WR
EZI2C_SCB__UART_CTRL EQU CYREG_SCB2_UART_CTRL
EZI2C_SCB__UART_FLOW_CTRL EQU CYREG_SCB2_UART_FLOW_CTRL
EZI2C_SCB__UART_RX_CTRL EQU CYREG_SCB2_UART_RX_CTRL
EZI2C_SCB__UART_RX_STATUS EQU CYREG_SCB2_UART_RX_STATUS
EZI2C_SCB__UART_TX_CTRL EQU CYREG_SCB2_UART_TX_CTRL

/* EZI2C_SCB_IRQ */
EZI2C_SCB_IRQ__INTC_CLR_EN_REG EQU CYREG_CM0P_ICER
EZI2C_SCB_IRQ__INTC_CLR_PD_REG EQU CYREG_CM0P_ICPR
EZI2C_SCB_IRQ__INTC_MASK EQU 0x200
EZI2C_SCB_IRQ__INTC_NUMBER EQU 9
EZI2C_SCB_IRQ__INTC_PRIOR_MASK EQU 0xC000
EZI2C_SCB_IRQ__INTC_PRIOR_NUM EQU 3
EZI2C_SCB_IRQ__INTC_PRIOR_REG EQU CYREG_CM0P_IPR2
EZI2C_SCB_IRQ__INTC_SET_EN_REG EQU CYREG_CM0P_ISER
EZI2C_SCB_IRQ__INTC_SET_PD_REG EQU CYREG_CM0P_ISPR

/* EZI2C_SCBCLK */
EZI2C_SCBCLK__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL2
EZI2C_SCBCLK__DIV_ID EQU 0x00000040
EZI2C_SCBCLK__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL0
EZI2C_SCBCLK__PA_DIV_ID EQU 0x000000FF

/* EZI2C_scl */
EZI2C_scl__0__DR EQU CYREG_GPIO_PRT0_DR
EZI2C_scl__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
EZI2C_scl__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
EZI2C_scl__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
EZI2C_scl__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
EZI2C_scl__0__HSIOM_GPIO EQU 0
EZI2C_scl__0__HSIOM_I2C EQU 14
EZI2C_scl__0__HSIOM_I2C_SCL EQU 14
EZI2C_scl__0__HSIOM_MASK EQU 0x0000000F
EZI2C_scl__0__HSIOM_SHIFT EQU 0
EZI2C_scl__0__HSIOM_UART EQU 9
EZI2C_scl__0__HSIOM_UART_CTS EQU 9
EZI2C_scl__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
EZI2C_scl__0__INTR EQU CYREG_GPIO_PRT0_INTR
EZI2C_scl__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
EZI2C_scl__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
EZI2C_scl__0__MASK EQU 0x01
EZI2C_scl__0__PC EQU CYREG_GPIO_PRT0_PC
EZI2C_scl__0__PC2 EQU CYREG_GPIO_PRT0_PC2
EZI2C_scl__0__PORT EQU 0
EZI2C_scl__0__PS EQU CYREG_GPIO_PRT0_PS
EZI2C_scl__0__SHIFT EQU 0
EZI2C_scl__DR EQU CYREG_GPIO_PRT0_DR
EZI2C_scl__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
EZI2C_scl__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
EZI2C_scl__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
EZI2C_scl__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
EZI2C_scl__INTR EQU CYREG_GPIO_PRT0_INTR
EZI2C_scl__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
EZI2C_scl__INTSTAT EQU CYREG_GPIO_PRT0_INTR
EZI2C_scl__MASK EQU 0x01
EZI2C_scl__PC EQU CYREG_GPIO_PRT0_PC
EZI2C_scl__PC2 EQU CYREG_GPIO_PRT0_PC2
EZI2C_scl__PORT EQU 0
EZI2C_scl__PS EQU CYREG_GPIO_PRT0_PS
EZI2C_scl__SHIFT EQU 0

/* EZI2C_sda */
EZI2C_sda__0__DR EQU CYREG_GPIO_PRT0_DR
EZI2C_sda__0__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
EZI2C_sda__0__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
EZI2C_sda__0__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
EZI2C_sda__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
EZI2C_sda__0__HSIOM_GPIO EQU 0
EZI2C_sda__0__HSIOM_I2C EQU 14
EZI2C_sda__0__HSIOM_I2C_SDA EQU 14
EZI2C_sda__0__HSIOM_MASK EQU 0x000000F0
EZI2C_sda__0__HSIOM_SHIFT EQU 4
EZI2C_sda__0__HSIOM_UART EQU 9
EZI2C_sda__0__HSIOM_UART_RTS EQU 9
EZI2C_sda__0__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
EZI2C_sda__0__INTR EQU CYREG_GPIO_PRT0_INTR
EZI2C_sda__0__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
EZI2C_sda__0__INTSTAT EQU CYREG_GPIO_PRT0_INTR
EZI2C_sda__0__MASK EQU 0x02
EZI2C_sda__0__PC EQU CYREG_GPIO_PRT0_PC
EZI2C_sda__0__PC2 EQU CYREG_GPIO_PRT0_PC2
EZI2C_sda__0__PORT EQU 0
EZI2C_sda__0__PS EQU CYREG_GPIO_PRT0_PS
EZI2C_sda__0__SHIFT EQU 1
EZI2C_sda__DR EQU CYREG_GPIO_PRT0_DR
EZI2C_sda__DR_CLR EQU CYREG_GPIO_PRT0_DR_CLR
EZI2C_sda__DR_INV EQU CYREG_GPIO_PRT0_DR_INV
EZI2C_sda__DR_SET EQU CYREG_GPIO_PRT0_DR_SET
EZI2C_sda__INTCFG EQU CYREG_GPIO_PRT0_INTR_CFG
EZI2C_sda__INTR EQU CYREG_GPIO_PRT0_INTR
EZI2C_sda__INTR_CFG EQU CYREG_GPIO_PRT0_INTR_CFG
EZI2C_sda__INTSTAT EQU CYREG_GPIO_PRT0_INTR
EZI2C_sda__MASK EQU 0x02
EZI2C_sda__PC EQU CYREG_GPIO_PRT0_PC
EZI2C_sda__PC2 EQU CYREG_GPIO_PRT0_PC2
EZI2C_sda__PORT EQU 0
EZI2C_sda__PS EQU CYREG_GPIO_PRT0_PS
EZI2C_sda__SHIFT EQU 1

/* PWM_0_cy_m0s8_tcpwm_1 */
PWM_0_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT0_CC
PWM_0_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT0_CC_BUFF
PWM_0_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT0_COUNTER
PWM_0_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT0_CTRL
PWM_0_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT0_INTR
PWM_0_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT0_INTR_MASK
PWM_0_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT0_INTR_MASKED
PWM_0_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT0_INTR_SET
PWM_0_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT0_PERIOD
PWM_0_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT0_PERIOD_BUFF
PWM_0_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT0_STATUS
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x01
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 0
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x100
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 8
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x1000000
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 24
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x10000
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 16
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x01
PWM_0_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 0
PWM_0_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_0_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x01
PWM_0_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 0
PWM_0_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 0
PWM_0_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT0_TR_CTRL0
PWM_0_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT0_TR_CTRL1
PWM_0_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT0_TR_CTRL2

/* PWM_1_cy_m0s8_tcpwm_1 */
PWM_1_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT1_CC
PWM_1_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT1_CC_BUFF
PWM_1_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT1_COUNTER
PWM_1_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT1_CTRL
PWM_1_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT1_INTR
PWM_1_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT1_INTR_MASK
PWM_1_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT1_INTR_MASKED
PWM_1_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT1_INTR_SET
PWM_1_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT1_PERIOD
PWM_1_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT1_PERIOD_BUFF
PWM_1_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT1_STATUS
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x02
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 1
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x200
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 9
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x2000000
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 25
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x20000
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 17
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x02
PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 1
PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x02
PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 1
PWM_1_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 1
PWM_1_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT1_TR_CTRL0
PWM_1_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT1_TR_CTRL1
PWM_1_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT1_TR_CTRL2

/* PWM_2_cy_m0s8_tcpwm_1 */
PWM_2_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT2_CC
PWM_2_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT2_CC_BUFF
PWM_2_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT2_COUNTER
PWM_2_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT2_CTRL
PWM_2_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT2_INTR
PWM_2_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT2_INTR_MASK
PWM_2_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT2_INTR_MASKED
PWM_2_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT2_INTR_SET
PWM_2_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT2_PERIOD
PWM_2_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT2_PERIOD_BUFF
PWM_2_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT2_STATUS
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x04
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 2
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x400
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 10
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x4000000
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 26
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x40000
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 18
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x04
PWM_2_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 2
PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x04
PWM_2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 2
PWM_2_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 2
PWM_2_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT2_TR_CTRL0
PWM_2_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT2_TR_CTRL1
PWM_2_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT2_TR_CTRL2

/* PWM_3_cy_m0s8_tcpwm_1 */
PWM_3_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT3_CC
PWM_3_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT3_CC_BUFF
PWM_3_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT3_COUNTER
PWM_3_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT3_CTRL
PWM_3_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT3_INTR
PWM_3_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT3_INTR_MASK
PWM_3_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT3_INTR_MASKED
PWM_3_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT3_INTR_SET
PWM_3_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT3_PERIOD
PWM_3_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT3_PERIOD_BUFF
PWM_3_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT3_STATUS
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x08
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 3
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x800
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 11
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x8000000
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 27
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x80000
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 19
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x08
PWM_3_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 3
PWM_3_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_3_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x08
PWM_3_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 3
PWM_3_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 3
PWM_3_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT3_TR_CTRL0
PWM_3_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT3_TR_CTRL1
PWM_3_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT3_TR_CTRL2

/* PWM_4_cy_m0s8_tcpwm_1 */
PWM_4_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT4_CC
PWM_4_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT4_CC_BUFF
PWM_4_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT4_COUNTER
PWM_4_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT4_CTRL
PWM_4_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT4_INTR
PWM_4_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT4_INTR_MASK
PWM_4_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT4_INTR_MASKED
PWM_4_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT4_INTR_SET
PWM_4_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT4_PERIOD
PWM_4_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT4_PERIOD_BUFF
PWM_4_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT4_STATUS
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x10
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 4
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x1000
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 12
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x10000000
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 28
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x100000
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 20
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x10
PWM_4_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 4
PWM_4_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_4_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x10
PWM_4_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 4
PWM_4_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 4
PWM_4_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT4_TR_CTRL0
PWM_4_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT4_TR_CTRL1
PWM_4_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT4_TR_CTRL2

/* Clock_1 */
Clock_1__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL8
Clock_1__DIV_ID EQU 0x00000041
Clock_1__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL1
Clock_1__PA_DIV_ID EQU 0x000000FF

/* Servo_0 */
Servo_0__0__DR EQU CYREG_GPIO_PRT3_DR
Servo_0__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
Servo_0__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
Servo_0__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
Servo_0__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
Servo_0__0__HSIOM_MASK EQU 0x0000000F
Servo_0__0__HSIOM_SHIFT EQU 0
Servo_0__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
Servo_0__0__INTR EQU CYREG_GPIO_PRT3_INTR
Servo_0__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
Servo_0__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
Servo_0__0__MASK EQU 0x01
Servo_0__0__PC EQU CYREG_GPIO_PRT3_PC
Servo_0__0__PC2 EQU CYREG_GPIO_PRT3_PC2
Servo_0__0__PORT EQU 3
Servo_0__0__PS EQU CYREG_GPIO_PRT3_PS
Servo_0__0__SHIFT EQU 0
Servo_0__DR EQU CYREG_GPIO_PRT3_DR
Servo_0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
Servo_0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
Servo_0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
Servo_0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
Servo_0__INTR EQU CYREG_GPIO_PRT3_INTR
Servo_0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
Servo_0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
Servo_0__MASK EQU 0x01
Servo_0__PC EQU CYREG_GPIO_PRT3_PC
Servo_0__PC2 EQU CYREG_GPIO_PRT3_PC2
Servo_0__PORT EQU 3
Servo_0__PS EQU CYREG_GPIO_PRT3_PS
Servo_0__SHIFT EQU 0

/* Servo_1 */
Servo_1__0__DR EQU CYREG_GPIO_PRT2_DR
Servo_1__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
Servo_1__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
Servo_1__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
Servo_1__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Servo_1__0__HSIOM_MASK EQU 0x0F000000
Servo_1__0__HSIOM_SHIFT EQU 24
Servo_1__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
Servo_1__0__INTR EQU CYREG_GPIO_PRT2_INTR
Servo_1__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
Servo_1__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
Servo_1__0__MASK EQU 0x40
Servo_1__0__PC EQU CYREG_GPIO_PRT2_PC
Servo_1__0__PC2 EQU CYREG_GPIO_PRT2_PC2
Servo_1__0__PORT EQU 2
Servo_1__0__PS EQU CYREG_GPIO_PRT2_PS
Servo_1__0__SHIFT EQU 6
Servo_1__DR EQU CYREG_GPIO_PRT2_DR
Servo_1__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
Servo_1__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
Servo_1__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
Servo_1__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
Servo_1__INTR EQU CYREG_GPIO_PRT2_INTR
Servo_1__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
Servo_1__INTSTAT EQU CYREG_GPIO_PRT2_INTR
Servo_1__MASK EQU 0x40
Servo_1__PC EQU CYREG_GPIO_PRT2_PC
Servo_1__PC2 EQU CYREG_GPIO_PRT2_PC2
Servo_1__PORT EQU 2
Servo_1__PS EQU CYREG_GPIO_PRT2_PS
Servo_1__SHIFT EQU 6

/* Servo_2 */
Servo_2__0__DR EQU CYREG_GPIO_PRT1_DR
Servo_2__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Servo_2__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Servo_2__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Servo_2__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Servo_2__0__HSIOM_MASK EQU 0x0000000F
Servo_2__0__HSIOM_SHIFT EQU 0
Servo_2__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Servo_2__0__INTR EQU CYREG_GPIO_PRT1_INTR
Servo_2__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Servo_2__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Servo_2__0__MASK EQU 0x01
Servo_2__0__PC EQU CYREG_GPIO_PRT1_PC
Servo_2__0__PC2 EQU CYREG_GPIO_PRT1_PC2
Servo_2__0__PORT EQU 1
Servo_2__0__PS EQU CYREG_GPIO_PRT1_PS
Servo_2__0__SHIFT EQU 0
Servo_2__DR EQU CYREG_GPIO_PRT1_DR
Servo_2__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Servo_2__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Servo_2__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Servo_2__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Servo_2__INTR EQU CYREG_GPIO_PRT1_INTR
Servo_2__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Servo_2__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Servo_2__MASK EQU 0x01
Servo_2__PC EQU CYREG_GPIO_PRT1_PC
Servo_2__PC2 EQU CYREG_GPIO_PRT1_PC2
Servo_2__PORT EQU 1
Servo_2__PS EQU CYREG_GPIO_PRT1_PS
Servo_2__SHIFT EQU 0

/* Servo_3 */
Servo_3__0__DR EQU CYREG_GPIO_PRT1_DR
Servo_3__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Servo_3__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Servo_3__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Servo_3__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Servo_3__0__HSIOM_MASK EQU 0x00000F00
Servo_3__0__HSIOM_SHIFT EQU 8
Servo_3__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Servo_3__0__INTR EQU CYREG_GPIO_PRT1_INTR
Servo_3__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Servo_3__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Servo_3__0__MASK EQU 0x04
Servo_3__0__PC EQU CYREG_GPIO_PRT1_PC
Servo_3__0__PC2 EQU CYREG_GPIO_PRT1_PC2
Servo_3__0__PORT EQU 1
Servo_3__0__PS EQU CYREG_GPIO_PRT1_PS
Servo_3__0__SHIFT EQU 2
Servo_3__DR EQU CYREG_GPIO_PRT1_DR
Servo_3__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
Servo_3__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
Servo_3__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
Servo_3__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
Servo_3__INTR EQU CYREG_GPIO_PRT1_INTR
Servo_3__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
Servo_3__INTSTAT EQU CYREG_GPIO_PRT1_INTR
Servo_3__MASK EQU 0x04
Servo_3__PC EQU CYREG_GPIO_PRT1_PC
Servo_3__PC2 EQU CYREG_GPIO_PRT1_PC2
Servo_3__PORT EQU 1
Servo_3__PS EQU CYREG_GPIO_PRT1_PS
Servo_3__SHIFT EQU 2

/* Servo_4 */
Servo_4__0__DR EQU CYREG_GPIO_PRT2_DR
Servo_4__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
Servo_4__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
Servo_4__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
Servo_4__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Servo_4__0__HSIOM_MASK EQU 0x0000000F
Servo_4__0__HSIOM_SHIFT EQU 0
Servo_4__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
Servo_4__0__INTR EQU CYREG_GPIO_PRT2_INTR
Servo_4__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
Servo_4__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
Servo_4__0__MASK EQU 0x01
Servo_4__0__PC EQU CYREG_GPIO_PRT2_PC
Servo_4__0__PC2 EQU CYREG_GPIO_PRT2_PC2
Servo_4__0__PORT EQU 2
Servo_4__0__PS EQU CYREG_GPIO_PRT2_PS
Servo_4__0__SHIFT EQU 0
Servo_4__DR EQU CYREG_GPIO_PRT2_DR
Servo_4__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
Servo_4__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
Servo_4__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
Servo_4__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
Servo_4__INTR EQU CYREG_GPIO_PRT2_INTR
Servo_4__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
Servo_4__INTSTAT EQU CYREG_GPIO_PRT2_INTR
Servo_4__MASK EQU 0x01
Servo_4__PC EQU CYREG_GPIO_PRT2_PC
Servo_4__PC2 EQU CYREG_GPIO_PRT2_PC2
Servo_4__PORT EQU 2
Servo_4__PS EQU CYREG_GPIO_PRT2_PS
Servo_4__SHIFT EQU 0

/* I2C_OUT_EN */
I2C_OUT_EN__0__DR EQU CYREG_GPIO_PRT2_DR
I2C_OUT_EN__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
I2C_OUT_EN__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
I2C_OUT_EN__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
I2C_OUT_EN__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
I2C_OUT_EN__0__HSIOM_MASK EQU 0x00000F00
I2C_OUT_EN__0__HSIOM_SHIFT EQU 8
I2C_OUT_EN__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
I2C_OUT_EN__0__INTR EQU CYREG_GPIO_PRT2_INTR
I2C_OUT_EN__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
I2C_OUT_EN__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
I2C_OUT_EN__0__MASK EQU 0x04
I2C_OUT_EN__0__PC EQU CYREG_GPIO_PRT2_PC
I2C_OUT_EN__0__PC2 EQU CYREG_GPIO_PRT2_PC2
I2C_OUT_EN__0__PORT EQU 2
I2C_OUT_EN__0__PS EQU CYREG_GPIO_PRT2_PS
I2C_OUT_EN__0__SHIFT EQU 2
I2C_OUT_EN__DR EQU CYREG_GPIO_PRT2_DR
I2C_OUT_EN__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
I2C_OUT_EN__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
I2C_OUT_EN__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
I2C_OUT_EN__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
I2C_OUT_EN__INTR EQU CYREG_GPIO_PRT2_INTR
I2C_OUT_EN__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
I2C_OUT_EN__INTSTAT EQU CYREG_GPIO_PRT2_INTR
I2C_OUT_EN__MASK EQU 0x04
I2C_OUT_EN__PC EQU CYREG_GPIO_PRT2_PC
I2C_OUT_EN__PC2 EQU CYREG_GPIO_PRT2_PC2
I2C_OUT_EN__PORT EQU 2
I2C_OUT_EN__PS EQU CYREG_GPIO_PRT2_PS
I2C_OUT_EN__SHIFT EQU 2

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 48000000
CYDEV_BCLK__HFCLK__KHZ EQU 48000
CYDEV_BCLK__HFCLK__MHZ EQU 48
CYDEV_BCLK__SYSCLK__HZ EQU 48000000
CYDEV_BCLK__SYSCLK__KHZ EQU 48000
CYDEV_BCLK__SYSCLK__MHZ EQU 48
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 12
CYDEV_CHIP_DIE_PSOC5LP EQU 19
CYDEV_CHIP_DIE_PSOC5TM EQU 20
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 4
CYDEV_CHIP_FAMILY_FM3 EQU 5
CYDEV_CHIP_FAMILY_FM4 EQU 6
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x1B0E11AB
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 12
CYDEV_CHIP_MEMBER_4C EQU 18
CYDEV_CHIP_MEMBER_4D EQU 8
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 13
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 11
CYDEV_CHIP_MEMBER_4I EQU 17
CYDEV_CHIP_MEMBER_4J EQU 9
CYDEV_CHIP_MEMBER_4K EQU 10
CYDEV_CHIP_MEMBER_4L EQU 16
CYDEV_CHIP_MEMBER_4M EQU 15
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4P EQU 14
CYDEV_CHIP_MEMBER_4Q EQU 7
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 20
CYDEV_CHIP_MEMBER_5B EQU 19
CYDEV_CHIP_MEMBER_FM3 EQU 24
CYDEV_CHIP_MEMBER_FM4 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 21
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 22
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 23
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4K
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4K_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 8
CYDEV_DFT_SELECT_CLK1 EQU 9
CYDEV_HEAP_SIZE EQU 0x0A00
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_m0s8cpussv3_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8lpcomp_VERSION EQU 2
CYIPBLOCK_m0s8pass4a_VERSION EQU 1
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8wco_VERSION EQU 1
CYIPBLOCK_s8srsslt_VERSION EQU 1
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
